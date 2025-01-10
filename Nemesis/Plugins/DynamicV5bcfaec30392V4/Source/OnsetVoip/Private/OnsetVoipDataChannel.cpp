// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipDataChannel.h"
#include "OnsetVoip.h"
#include "OnsetVoipWorldSubsystem.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Pawn.h"
#include "Engine/NetDriver.h"
#include "Engine/NetConnection.h"
#include "UObject/WeakObjectPtrTemplates.h"

FName OnsetVoipChannelName(TEXT("OnsetVoip"));

FORCEINLINE UOnsetVoipDataChannel* StaticGetOnsetVoipChannel(const UNetDriver* NetDriver, const UNetConnection* NetConn)
{
	return Cast<UOnsetVoipDataChannel>(NetConn->Channels[NetDriver->ChannelDefinitionMap[OnsetVoipChannelName].StaticChannelIndex]);
}

UOnsetVoipDataChannel* UOnsetVoipDataChannel::GetOnsetVoipChannel(const UNetDriver* NetDriver, const UNetConnection* NetConn)
{
	return StaticGetOnsetVoipChannel(NetDriver, NetConn);
}

// Function only called on servers to replicate packets to relevant clients.
FORCEINLINE void ServerReplicateVoipPacket(const UNetDriver* NetDriver, const UOnsetVoipWorldSubsystem* VoipWorldSubsystem, const UOnsetVoipTalker* FromVoipTalker, const FOnsetVoipPacketPtr& VoipPacket, const UNetConnection* FromConnection)
{
	for (UNetConnection* ToConnection : NetDriver->ClientConnections)
	{
		if (ToConnection == nullptr ||
			ToConnection->PlayerController == nullptr ||
			ToConnection == FromConnection)
		{
			continue;
		}

		const UOnsetVoipTalker* ToVoipTalker = VoipWorldSubsystem->GetVoipTalker(ToConnection->PlayerController->PlayerState);
		if (UNLIKELY(ToVoipTalker == nullptr)) // A talker object or player state might not yet exist if the connection is new.
		{
			continue;
		}

		UOnsetVoipDataChannel* Ch = StaticGetOnsetVoipChannel(NetDriver, ToConnection);
		if (UNLIKELY(Ch == nullptr))
		{
			continue;
		}

		const EOnsetVoipNetRelevancy VoiceNetRelevancy = Ch->VoipNetRelevancy->GetVoiceNetRelevancy(FromVoipTalker, ToVoipTalker, ToConnection, VoipPacket);
		if (VoiceNetRelevancy == EOnsetVoipNetRelevancy::RELEVANT_NONE)
		{
			continue;
		}

		FOnsetVoicePacketWrapper VoicePacketWrapper(VoipPacket, VoiceNetRelevancy == EOnsetVoipNetRelevancy::RELEVANT_2D);
		Ch->AddVoipPacket(MoveTemp(VoicePacketWrapper));
	}
}

#if !UE_SERVER
// Function to replicate a locally recorded packet to the server if client or to clients if listen server.
void UOnsetVoipDataChannel::ReplicateLocalVoipPacket(const ULocalPlayer* LocalPlayer, const FOnsetVoipPacketPtr& VoipPacket)
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(LocalPlayer, EGetWorldErrorMode::ReturnNull))
	{
		if (const UNetDriver* NetDriver = World->GetNetDriver())
		{
			if (LocalPlayer->PlayerController &&
				LocalPlayer->PlayerController->PlayerState)
			{
				VoipPacket->OwnerPlayerState = LocalPlayer->PlayerController->PlayerState;

				if (World->GetNetMode() == ENetMode::NM_Client)
				{
					if (NetDriver->ServerConnection)
					{
						if (UOnsetVoipDataChannel* Ch = StaticGetOnsetVoipChannel(NetDriver, NetDriver->ServerConnection))
						{
							Ch->AddVoipPacket(VoipPacket);
						}
					}
				}
				else // Listen server
				{
					if (UOnsetVoipWorldSubsystem* VoipWorldSubsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
					{
						if (const UOnsetVoipTalker* FromVoipTalker = VoipWorldSubsystem->GetVoipTalker(LocalPlayer->PlayerController->PlayerState))
						{
							ServerReplicateVoipPacket(NetDriver, VoipWorldSubsystem, FromVoipTalker, VoipPacket, nullptr);
						}
					}
				}
			}
		}
	}
}
#endif

void UOnsetVoipDataChannel::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		VoipNetRelevancy = TUniquePtr<FOnsetVoipNetRelevancy>(new FOnsetVoipNetRelevancy());
	}
}

void UOnsetVoipDataChannel::ReceivedBunch(FInBunch& Bunch)
{
#if !UE_SERVER
	NumTotalBitsReceived += Bunch.GetNumBits();
#endif

	if (Connection->Driver &&
		Connection->Driver->World &&
		Connection->Driver->World->bIsTearingDown == false &&
		Connection->PackageMap &&
		Connection->PlayerController)
	{
		// Get the VoipWorldSubsystem for this connection's world.
		if (UOnsetVoipWorldSubsystem* VoipWorldSubsystem = Connection->Driver->World->GetSubsystem<UOnsetVoipWorldSubsystem>())
		{
			while (!Bunch.AtEnd() && Connection && Connection->GetConnectionState() != USOCK_Closed)
			{
				UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("Received VoIP bunch of size %i (us %s) from %s [Connection->PlayerController: %s]"),
					Bunch.GetNumBytes(), *ToString(Connection->Driver->GetNetMode()), *GetNameSafe(Connection->OwningActor), *Connection->PlayerController->GetName());

				FOnsetVoicePacketWrapper PacketWrapper;
				if (PacketWrapper.Serialize(Bunch, Connection->PackageMap) && Bunch.IsError() == false)
				{
					// Get the owning VoipTalker object.
#if UE_SERVER
					if (UOnsetVoipTalker* FromVoipTalker = VoipWorldSubsystem->GetVoipTalker(Connection->PlayerController->PlayerState))
#else
					// If there is no ServerConnection we are a server.
					const bool bIsServer = Connection->Driver->ServerConnection == nullptr;

					APlayerState* SendingPlayerState = bIsServer ? ToRawPtr(Connection->PlayerController->PlayerState) : PacketWrapper.VoipPacket->OwnerPlayerState.Get();
					if (UOnsetVoipTalker* FromVoipTalker = VoipWorldSubsystem->GetVoipTalker(SendingPlayerState))
#endif
					{
						// See if voip is enabled on a talker.
						// Server: If not enabled then do not send it to any other clients.
						// Client: If not enabled then do not process voice from for this talker.
						if (FromVoipTalker->IsVoipEnabled())
						{
#if !UE_SERVER
							if (bIsServer)
							{
#endif
								// If we are the server, override the playerstate.
								PacketWrapper.VoipPacket->OwnerPlayerState = Connection->PlayerController->PlayerState;
#if !UE_SERVER
							}
#endif

#if ONSETVOIP_ENABLE_VOICE_PROCESSING
							bool bProcessVoice = false;
#endif

#if !UE_SERVER
							if (Connection->Driver->GetNetMode() == ENetMode::NM_ListenServer)
							{
								const UOnsetVoipTalker* ToVoipTalker = VoipWorldSubsystem->GetVoipTalker(GEngine->GetFirstLocalPlayerController(Connection->Driver->World)->PlayerState);

								// On a listen server we have yet to decide the relevancy of client voices here.
								const EOnsetVoipNetRelevancy VoiceNetRelevancy = VoipNetRelevancy->GetVoiceNetRelevancy(FromVoipTalker, ToVoipTalker, nullptr, PacketWrapper.VoipPacket);
								if (VoiceNetRelevancy != EOnsetVoipNetRelevancy::RELEVANT_NONE)
								{
									bProcessVoice = true;
									PacketWrapper.bIs2D = VoiceNetRelevancy == EOnsetVoipNetRelevancy::RELEVANT_2D;
								}
							}
							else
							{
								// Process if we are a client.
								bProcessVoice = !bIsServer;
							}
#else
#if ONSETVOIP_ENABLE_VOICE_PROCESSING
							bProcessVoice = true;
#endif
#endif

#if ONSETVOIP_ENABLE_VOICE_PROCESSING // TODO: On dedicated server bIs2D would not be calculated
							if (bProcessVoice)
							{
								FromVoipTalker->ProcessVoiceData(PacketWrapper, VoipWorldSubsystem);
							}
#endif

#if !UE_SERVER
							if (bIsServer)
							{
#endif
								ServerReplicateVoipPacket(Connection->Driver, VoipWorldSubsystem, FromVoipTalker, PacketWrapper.VoipPacket, Connection);
#if !UE_SERVER
							}
#endif
						}
					}
					else
					{
						UE_LOG(LogOnsetVoip, Warning, TEXT("Connection %s (PlayerState: %s) has no valid OnsetVoipTalker, discarding VoIP packet."),
							*Connection->GetName(), *Connection->PlayerController->PlayerState->GetName());
					}
				}
				else
				{
					UE_LOG(LogOnsetVoip, Warning, TEXT("Something went wrong while reading voip bunch (%s)"),
						*Connection->PlayerId.ToDebugString());

					Bunch.SetError();
					break;
				}
			}
		}
	}
}

FPacketIdRange UOnsetVoipDataChannel::SendBunch(FOutBunch* Bunch, bool Merge)
{
#if !UE_SERVER
	NumTotalBitsSent += Bunch->GetNumBits();
#endif

	UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("Sending VoIP bunch with size of %i bytes."), Bunch->GetNumBytes());

	return Super::SendBunch(Bunch, Merge);
}

void UOnsetVoipDataChannel::Tick()
{
	if (VoipPackets.Num() > 0 && Connection->PlayerController != nullptr)
	{
		int32 NumSent = 0;
		for (FOnsetVoicePacketWrapper& Packet : VoipPackets)
		{
			if (UNLIKELY(IsNetReady(true) == false))
			{
				UE_LOG(LogOnsetVoip, Warning, TEXT("Connection not ready or saturated."));
				break;
			}

			FOutBunch Bunch(this, 0);
			Bunch.bReliable = OpenAcked != true;

			if (Packet.Serialize(Bunch, Connection->PackageMap) && !Bunch.IsError())
			{
				SendBunch(&Bunch, true);
				NumSent++;
			}
			else
			{
				UE_LOG(LogOnsetVoip, Error, TEXT("Failed to serialize voice packet %s."), *Packet.VoipPacket->ToDebugString());
				continue;
			}
		}

		if (NumSent != VoipPackets.Num())
		{
			UE_LOG(LogOnsetVoip, Warning, TEXT("Dropped %i voice packets for %s."), VoipPackets.Num() - NumSent, *Connection->Describe());
		}

		VoipPackets.Empty(0);
	}
}

bool UOnsetVoipDataChannel::CanStopTicking() const
{
	return false;
}

FString UOnsetVoipDataChannel::Describe()
{
	return FString::Printf(TEXT("UOnsetVoipDataChannel: %s"), *Super::Describe());
}

void UOnsetVoipDataChannel::AddVoipPacket(FOnsetVoicePacketWrapper&& VoipPacketWrapper)
{
	UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("AddVoipPacket: %s [%s] to=%s from=%s"),
		*Connection->PlayerId.ToDebugString(),
		*Connection->Driver->GetDescription(),
		*Connection->LowLevelDescribe(),
		*GetPathNameSafe(VoipPacketWrapper.VoipPacket->OwnerPlayerState.Get()));

	VoipPackets.Add(MoveTemp(VoipPacketWrapper));
}

void UOnsetVoipDataChannel::AddVoipPacket(const FOnsetVoipPacketPtr& VoipPacket)
{
	FOnsetVoicePacketWrapper Wrapper(VoipPacket);
	AddVoipPacket(MoveTemp(Wrapper));
}

#if !UE_SERVER
void UOnsetVoipDataChannel::CalculateAverageThroughput(int64& OutAverageBytesSent, int64& OutAverageBytesReceived)
{
	const double CurrentTime = FPlatformTime::Seconds();
	const double Timespan = CurrentTime - LastTimeAverageCalculated;

	// Time in seconds since the last call until we reset the average value calculation.
	const constexpr double MaxTimespanBeforeReset = 10.0;

	const bool bResetStat = LastTimeAverageCalculated == 0.0 || Timespan >= MaxTimespanBeforeReset;

	if (bResetStat)
	{
		OutAverageBytesSent = 0;
		OutAverageBytesReceived = 0;
	}
	else
	{
		OutAverageBytesSent = (int64(double(NumTotalBitsSent - LastNumTotalBits[0]) * (1.0 / Timespan)) + 7) >> 3;
		OutAverageBytesReceived = (int64(double(NumTotalBitsReceived - LastNumTotalBits[1]) * (1.0 / Timespan)) + 7) >> 3;
	}

	if (bResetStat || Timespan >= 0.5)
	{
		LastNumTotalBits[0] = NumTotalBitsSent;
		LastNumTotalBits[1] = NumTotalBitsReceived;
		LastTimeAverageCalculated = CurrentTime;
	}
}
#endif
