// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipTalker.h"
#include "OnsetVoip.h"
#include "OnsetVoipSettings.h"
#include "OnsetVoipWorldSubsystem.h"
#include "OnsetVoipPawnInterface.h"
#include "OnsetVoipNameWidgetInterface.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Runtime/Launch/Resources/Version.h"

void UOnsetVoipTalker::PostInitProperties()
{
	Super::PostInitProperties();

#if !UE_SERVER
	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		GetPlayerState()->OnPawnSet.AddUniqueDynamic(this, &UOnsetVoipTalker::OnPlayerStatePawnSet);
	}
#endif
}

bool UOnsetVoipTalker::IsTalking() const
{
	return bCachedTalking;
}

bool UOnsetVoipTalker::IsLastReceivedTalkingState2D() const
{
	return bLastReceivedTalking2D;
}

float UOnsetVoipTalker::GetCurrentAmplitude() const
{
	return CachedAmplitude;
}

APlayerState* UOnsetVoipTalker::GetPlayerState() const
{
	return Cast<APlayerState>(GetOuter());
}

void UOnsetVoipTalker::CancelReceivedAudioData()
{
	bCancelReceivedAudioData = true;
}

void UOnsetVoipTalker::SetMuted(bool bMute)
{
	bMuted = bMute;
}

bool UOnsetVoipTalker::IsMuted() const
{
	return bMuted;
}

void UOnsetVoipTalker::SetMutedForPlayerState(bool bMute, APlayerState* PlayerState)
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("SetMutedForPlayerState function only has an effect when called on the server."));

	if (PlayerState)
	{
		if (const UWorld* World = GEngine->GetWorldFromContextObject(PlayerState, EGetWorldErrorMode::LogAndReturnNull))
		{
			if (const UOnsetVoipWorldSubsystem* Subsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
			{
				if (UOnsetVoipTalker* VoipTalker = Subsystem->GetVoipTalker(PlayerState))
				{
					SetMutedForVoipTalker(bMute, VoipTalker);
				}
			}
		}
	}
}

void UOnsetVoipTalker::SetMutedForVoipTalker(bool bMute, UOnsetVoipTalker* OtherVoipTalker)
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("SetMutedForVoipTalker function only has an effect when called on the server."));

	if (OtherVoipTalker)
	{
		if (bMute)
		{
			MutedVoipTalkers.AddUnique(OtherVoipTalker);
		}
		else
		{
			MutedVoipTalkers.Remove(OtherVoipTalker);
		}
	}
}

bool UOnsetVoipTalker::IsMutedForVoipTalker(UOnsetVoipTalker* OtherVoipTalker) const
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("IsMutedForVoipTalker function only has an effect when called on the server."));

	return MutedVoipTalkers.Contains(OtherVoipTalker);
}

bool UOnsetVoipTalker::IsMutedForPlayerState(APlayerState* PlayerState) const
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("IsMutedForPlayerState function only has an effect when called on the server."));

	if (PlayerState)
	{
		if (const UWorld* World = GEngine->GetWorldFromContextObject(PlayerState, EGetWorldErrorMode::LogAndReturnNull))
		{
			if (const UOnsetVoipWorldSubsystem* Subsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
			{
				if (UOnsetVoipTalker* VoipTalker = Subsystem->GetVoipTalker(PlayerState))
				{
					return IsMutedForVoipTalker(VoipTalker);
				}
			}
		}
	}

	return false;
}

void UOnsetVoipTalker::SetVoipEnabled(bool bEnable)
{
	bVoipEnabled = bEnable;
}

bool UOnsetVoipTalker::IsVoipEnabled() const
{
	return bVoipEnabled;
}

bool UOnsetVoipTalker::SetVoiceChannel(int32 ChannelId, bool bAdd)
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("SetVoiceChannel function only has an effect when called on the server."));

	if (ChannelId <= 0)
	{
		const bool bResult = bAdd ? !bVoiceWorldEnabled : bVoiceWorldEnabled;

		bVoiceWorldEnabled = bAdd;

		return bResult;
	}

	if (bAdd)
	{
		return VoiceChannelIds.AddUnique(ChannelId) != INDEX_NONE;
	}
	else
	{
		return VoiceChannelIds.Remove(ChannelId) != 0;
	}
}

bool UOnsetVoipTalker::IsInVoiceChannel(int32 ChannelId) const
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("IsInVoiceChannel function only has an effect when called on the server."));

	if (ChannelId <= 0)
	{
		return bVoiceWorldEnabled;
	}

	return VoiceChannelIds.Find(ChannelId) != INDEX_NONE;
}

void UOnsetVoipTalker::SetMutedOnVoiceChannel(bool bMute, int32 ChannelId)
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("SetMutedOnChannel function only has an effect when called on the server."));

	if (bMute)
	{
		MutedVoiceChannelIds.AddUnique(ChannelId);
	}
	else
	{
		MutedVoiceChannelIds.Remove(ChannelId);
	}
}

bool UOnsetVoipTalker::IsMutedOnVoiceChannel(int32 ChannelId) const
{
	ensureMsgf(UKismetSystemLibrary::IsServer(this), TEXT("IsMutedOnChannel function only has an effect when called on the server."));

	return MutedVoiceChannelIds.Contains(ChannelId);
}

UOnsetVoipAudioComponent* UOnsetVoipTalker::GetVoiceAudioComponent(bool bAudio2D) const
{
#if UE_SERVER
	return nullptr;
#else
	if (bAudio2D)
	{
		return AudioComponent2D;
	}

	return CachedAudioComponent3D;
#endif
}

void UOnsetVoipTalker::OnPlayerStatePawnSet(APlayerState* ChangedPlayerState, APawn* NewPlayerPawn, APawn* OldPlayerPawn)
{
#if !UE_SERVER
	UE_LOG(LogOnsetVoip, Verbose, TEXT("%s::OnPlayerStatePawnSet(%s, %s, %s)"), *GetName(), *GetNameSafe(ChangedPlayerState), *GetNameSafe(NewPlayerPawn), *GetNameSafe(OldPlayerPawn));

	checkf(ChangedPlayerState && ChangedPlayerState == GetPlayerState(), TEXT("OnPlayerStatePawnSet called with invalid player state. %s != %s"), *GetNameSafe(GetPlayerState()), *GetNameSafe(ChangedPlayerState));

	if (CachedAudioComponent3D)
	{
		// Clear any remaining 3D voice data.
		CachedAudioComponent3D->VoipSoundWave->ResetAudioBuffer();

		// If this component was dynamically created by this voip talker object we destroy it and let the system create a new one in InternalGetOrCreateAudioComponent.
		// This ensures the OnVoipAudioComponentCreated interface function is called.
		if (CachedAudioComponent3D->ComponentHasTag(TEXT("DynamicallyCreated")))
		{
			CachedAudioComponent3D->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
			CachedAudioComponent3D->DestroyComponent();
		}

		// Reset cached audio component.
		CachedAudioComponent3D = nullptr;
	}

	if (NewPlayerPawn)
	{
		// Try to get an existing audio component from the new player pawn.
		CachedAudioComponent3D = NewPlayerPawn->GetComponentByClass<UOnsetVoipAudioComponent>();
	}

	if (CachedNameplateComponent)
	{
		CachedNameplateComponent->CachedPlayerState = nullptr;

		// Hide cached nameplate component from old pawn.
		CachedNameplateComponent->SetVisibility(false);
		CachedNameplateComponent->SetComponentTickEnabled(false);

		// Reset cached nameplate component.
		CachedNameplateComponent = nullptr;
	}

	// If there is a new player pawn for this player state.
	if (NewPlayerPawn)
	{
		// See if there is an existing nameplate component.
		CachedNameplateComponent = NewPlayerPawn->GetComponentByClass<UOnsetNameplateComponent>();

		if (CachedNameplateComponent && !NewPlayerPawn->IsLocallyControlled())
		{
			CachedNameplateComponent->SetComponentTickEnabled(true);
		}

		const UOnsetVoipSettings* VoipSettings = GetDefault<UOnsetVoipSettings>();
		const bool bNameplateRequirementsSet = VoipSettings->DefaultNameplateComponentClass.Get() != nullptr && VoipSettings->DefaultNameplateWidget.IsNull() == false;

		// If there is non create a new one if it does not have the NoCreateNameplate tag, is not locally controlled and we have a default nameplate widget set in the onset voip settings.
		if (!CachedNameplateComponent &&
			!NewPlayerPawn->ActorHasTag((TEXT("NoCreateNameplate"))) &&
			!NewPlayerPawn->IsLocallyControlled() &&
			bNameplateRequirementsSet)
		{
			CachedNameplateComponent = Cast<UOnsetNameplateComponent>(NewPlayerPawn->AddComponentByClass(VoipSettings->DefaultNameplateComponentClass, true, FTransform::Identity, true));
			checkf(CachedNameplateComponent, TEXT("Did you forget to set DefaultNameplateComponentClass in the project voip settings?"));
			CachedNameplateComponent->ComponentTags.Add(TEXT("DynamicallyCreated"));

			const ACharacter* Character = Cast<ACharacter>(NewPlayerPawn);
			if (Character && Character->GetMesh())
			{
				USkeletalMeshComponent* CharacterMeshComponent = Character->GetMesh();

				static FNameplateAttachParam DefaultAttachParam;
				const FNameplateAttachParam* UseAttachParam = &DefaultAttachParam;
				for (const FNameplateAttachParam& AttachParam : VoipSettings->NameplateAttachParams)
				{
					if (CharacterMeshComponent->DoesSocketExist(AttachParam.AttachSocketName))
					{
						UseAttachParam = &AttachParam;
						break;
					}
				}

				CachedNameplateComponent->SetupAttachment(CharacterMeshComponent, UseAttachParam->AttachSocketName);

				NewPlayerPawn->FinishAddComponent(CachedNameplateComponent, true, FTransform::Identity);

				double AddHeight = 0.0;
				if (UseAttachParam->bAdjustAttachZAccordingToActorBounds)
				{
					AddHeight = CharacterMeshComponent->Bounds.BoxExtent.Z * 1.1;
				}

				if (UseAttachParam->AttachSocketName != NAME_None)
				{
					const FTransform ComponentTransform = CachedNameplateComponent->GetComponentTransform();
					const FTransform SocketTransform = CharacterMeshComponent->GetSocketTransform(UseAttachParam->AttachSocketName, ERelativeTransformSpace::RTS_World);

					const FVector NewRelativeLocation = SocketTransform.InverseTransformPosition(ComponentTransform.GetLocation() + FVector(0.0, 0.0, AddHeight) + UseAttachParam->RelativeAttachLocation);
					CachedNameplateComponent->SetRelativeLocation(NewRelativeLocation);
				}
				else
				{
					CachedNameplateComponent->AddRelativeLocation(FVector(0.0, 0.0, AddHeight));
				}
			}
			else
			{
				USceneComponent* AttachToComponent = nullptr;
#if ENGINE_MINOR_VERSION >= 3
				AttachToComponent = NewPlayerPawn->FindComponentByTag<USceneComponent>(TEXT("NameplateAttachComponent"));
#else
				const auto Components = NewPlayerPawn->GetComponentsByTag(USceneComponent::StaticClass(), TEXT("NameplateAttachComponent"));
				if (Components.Num() > 0)
				{
					AttachToComponent = Cast<USceneComponent>(Components[0]);
				}
#endif
				if (AttachToComponent == nullptr)
				{
					AttachToComponent = NewPlayerPawn->GetRootComponent();
				}
				CachedNameplateComponent->SetupAttachment(AttachToComponent);

				NewPlayerPawn->FinishAddComponent(CachedNameplateComponent, true, FTransform::Identity);

				FVector Origin, BoxExtent;
				NewPlayerPawn->GetActorBounds(false, Origin, BoxExtent, false);

				CachedNameplateComponent->SetRelativeLocation(FVector(0.0, 0.0, BoxExtent.Z * 1.1));
			}

			// SetWidgetClass will create a widget instance for us.
			CachedNameplateComponent->SetWidgetClass(VoipSettings->DefaultNameplateWidget.LoadSynchronous());
			CachedNameplateComponent->SetComponentTickEnabled(true);
			CachedNameplateComponent->SetVisibility(false);
		}

		if (CachedNameplateComponent)
		{
			CachedNameplateComponent->CachedPlayerState = GetPlayerState();
			CachedNameplateComponent->bCachedNameUpdated = false;
		}
	}

	if (NewPlayerPawn && NewPlayerPawn->Implements<UOnsetVoipPawnInterface>())
	{
		IOnsetVoipPawnInterface::Execute_OnNewPlayerState(NewPlayerPawn, GetPlayerState(), this);
	}
#else
	checkNoEntry(); // Purely cosmetic function so assert if called on a dedicated server by accident
#endif
}

bool UOnsetVoipTalker::ShouldSendVoiceTo(const UOnsetVoipTalker* OtherVoipTalker) const
{
	return MutedVoipTalkers.Contains(OtherVoipTalker) == false;
}

#if ONSETVOIP_ENABLE_VOICE_PROCESSING
TSharedPtr<IVoiceDecoder> UOnsetVoipTalker::GetOrCreateVoiceDecoder()
{
	if (!VoiceDecoder.IsValid())
	{
		const int32 SampleRate = GetDefault<UOnsetVoipSettings>()->VoiceCaptureSampleRate;
		const int32 NumChannels = GetDefault<UOnsetVoipSettings>()->VoiceCaptureChannels;

		VoiceDecoder = FVoiceModule::Get().CreateVoiceDecoder(SampleRate, NumChannels);
		checkf(VoiceDecoder.IsValid(), TEXT("Failed to create voice decoder (SampleRate: %i, NumChannels: %i). Possibly wrong settings or unsupported platform."), SampleRate, NumChannels);
	}

	return VoiceDecoder;
}

void UOnsetVoipTalker::ProcessVoiceData(const uint8* InAudioData, const int32 InAudioDataSize, bool bIs2D, float InCurrentAmplitude, UOnsetVoipWorldSubsystem* OnsetVoipWorldSubsystem)
{
	if (IsMuted())
	{
		return;
	}

	if (!OnsetVoipWorldSubsystem)
	{
		if (const UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull))
		{
			OnsetVoipWorldSubsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>();
		}
	}

	TArray<uint8>& DecompressionBuffer = OnsetVoipWorldSubsystem->GetTemporaryDecompressionBuffer();
	uint32 DecompressedDataSize = DecompressionBuffer.Num(); // OnsetVoip::MaxDecompressedBufferSize

	// Decompress the voice data back to raw. CompressedDataSize will be overriden with the new decompressed size.
	GetOrCreateVoiceDecoder()->Decode(InAudioData, InAudioDataSize, DecompressionBuffer.GetData(), DecompressedDataSize);

	UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("Decoded %i bytes of compressed voice data to %i bytes. bIs2D: %i"), InAudioDataSize, DecompressedDataSize, (int)bIs2D);

	if (UNLIKELY((!(DecompressedDataSize > 0))))
	{
		UE_LOG(LogOnsetVoip, Verbose, TEXT("The compressed voice data is zero."));
		return;
	}

	if (UNLIKELY((!(DecompressedDataSize % 2 == 0))))
	{
		UE_LOG(LogOnsetVoip, Verbose, TEXT("The voice data is unaligned."));
		return;
	}

	const decltype(CachedAmplitude) OldAmplitude = CachedAmplitude;
	CachedAmplitude = InCurrentAmplitude;

	bCancelReceivedAudioData = false;

	if (OnVoipAudioDataReceived.IsBound() || OnsetVoipWorldSubsystem->OnVoipAudioDataReceived.IsBound())
	{
		TArray<uint8> RawPCMAudio;
		RawPCMAudio.AddUninitialized(DecompressedDataSize);
		FMemory::Memcpy(RawPCMAudio.GetData(), DecompressionBuffer.GetData(), DecompressedDataSize);

		OnVoipAudioDataReceived.Broadcast(this, RawPCMAudio, bIs2D);
		OnsetVoipWorldSubsystem->OnVoipAudioDataReceived.Broadcast(this, RawPCMAudio, bIs2D);
	}

	if (Native_OnVoipAudioDataReceived.IsBound() || OnsetVoipWorldSubsystem->Native_OnVoipAudioDataReceived.IsBound())
	{
		const TArrayView<uint8> AudioDataVew(DecompressionBuffer.GetData(), DecompressedDataSize);
		Native_OnVoipAudioDataReceived.Broadcast(this, AudioDataVew, bIs2D);
		OnsetVoipWorldSubsystem->Native_OnVoipAudioDataReceived.Broadcast(this, AudioDataVew, bIs2D);
	}

	if (bCancelReceivedAudioData)
	{
		// Cancel: CancelReceivedAudioData() was called
		CachedAmplitude = OldAmplitude;
		return;
	}

	bLastReceivedTalking2D = bIs2D;

	if (UOnsetVoipAudioComponent* AudioComponent = InternalGetOrCreateAudioComponent(bIs2D))
	{
		UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("Adding %i bytes of raw audio data to %s."), DecompressedDataSize, *AudioComponent->Describe());

		AudioComponent->VoipSoundWave->AddAudioData(DecompressionBuffer.GetData(), DecompressedDataSize);

		if (!AudioComponent->IsPlaying())
		{
			UE_LOG(LogOnsetVoip, Verbose, TEXT("Playing audio component %s."), *AudioComponent->GetName());

			AudioComponent->Play();
			AudioComponent->SetComponentTickEnabled(true);
		}
	}

	LastReceivedVoipData = FPlatformTime::Seconds();

	if (!bCachedTalking)
	{
		InternalSetTalkingState(true);
	}
}

void UOnsetVoipTalker::ProcessVoiceData(const FOnsetVoicePacketWrapper& PacketWrapper, UOnsetVoipWorldSubsystem* OnsetVoipWorldSubsystem)
{
	ProcessVoiceData(PacketWrapper.VoipPacket->Buffer.GetData(), PacketWrapper.VoipPacket->Buffer.Num(), PacketWrapper.bIs2D, PacketWrapper.VoipPacket->Amplitude, OnsetVoipWorldSubsystem);
}

void UOnsetVoipTalker::UpdateTalkingState(const double& CurrentTime)
{
	if (bCachedTalking &&
		((CurrentTime - LastReceivedVoipData) >= OnsetVoip::TimeRemoteTalkerConsideredStoppedTalking))
	{
		InternalSetTalkingState(false);
	}
}

void UOnsetVoipTalker::InternalSetTalkingState(bool bInNewTalking)
{
	bCachedTalking = bInNewTalking;

	OnVoipTalkingStateChange.Broadcast(this, bInNewTalking, bLastReceivedTalking2D);

	if (const UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (const UOnsetVoipWorldSubsystem* Subsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
		{
			Subsystem->OnVoipTalkingStateChange.Broadcast(this, bInNewTalking, bLastReceivedTalking2D);
		}
	}

	if (APawn* PlayerPawn = GetPlayerState()->GetPawn())
	{
		if (PlayerPawn->Implements<UOnsetVoipPawnInterface>())
		{
			IOnsetVoipPawnInterface::Execute_OnTalkingStateChange(PlayerPawn, bInNewTalking, bLastReceivedTalking2D);
		}
	}

	if (CachedNameplateComponent && CachedNameplateComponent->IsVisible())
	{
		if (UUserWidget* Widget = CachedNameplateComponent->GetWidget())
		{
			if (Widget->Implements<UOnsetVoipNameWidgetInterface>())
			{
				IOnsetVoipNameWidgetInterface::Execute_SetNameplateSpeaking(Widget, IsTalking());
			}
		}
	}
}
#endif /* ONSETVOIP_ENABLE_VOICE_PROCESSING */

UOnsetVoipAudioComponent* UOnsetVoipTalker::InternalGetOrCreateAudioComponent(bool bIs2D)
{
#if UE_SERVER
	return nullptr;
#else
	if (bIs2D)
	{
		if (!AudioComponent2D)
		{
			AudioComponent2D = NewObject<UOnsetVoipAudioComponent>(this, DefaultOnsetVoipAudioComponentClass2D.Get() ? DefaultOnsetVoipAudioComponentClass2D.Get() : UOnsetVoipAudioComponent::StaticClass());
			UE_LOG(LogOnsetVoip, Verbose, TEXT("Created 2d audio component %s for %s."), *AudioComponent2D->GetPathName(), *GetPathName());
			AudioComponent2D->VoipSoundWave->AttenuationSettings = GetDefault<UOnsetVoipSettings>()->DefaultSoundAttenuation2D.LoadSynchronous();
			AudioComponent2D->VoipSoundWave->SourceEffectChain = GetDefault<UOnsetVoipSettings>()->DefaultSourceEffectPresetChain2D.LoadSynchronous();
			AudioComponent2D->ComponentTags.Add(TEXT("2DVoice"));

			if (APawn* PlayerPawn = GetPlayerState()->GetPawn())
			{
				if (PlayerPawn->Implements<UOnsetVoipPawnInterface>())
				{
					IOnsetVoipPawnInterface::Execute_OnVoipAudioComponentCreated(PlayerPawn, AudioComponent2D);
				}
			}
		}

		return AudioComponent2D;
	}
	else
	{
		if (!CachedAudioComponent3D)
		{
			if (APawn* PlayerPawn = GetPlayerState()->GetPawn())
			{
				CachedAudioComponent3D = Cast<UOnsetVoipAudioComponent>(PlayerPawn->AddComponentByClass(DefaultOnsetVoipAudioComponentClass3D.Get() ? DefaultOnsetVoipAudioComponentClass3D.Get() : UOnsetVoipAudioComponent::StaticClass(), false, FTransform::Identity, false));
				UE_LOG(LogOnsetVoip, Verbose, TEXT("Created 3d audio component %s for %s."), *CachedAudioComponent3D->GetPathName(), *GetPathName());
				CachedAudioComponent3D->ComponentTags.Add(TEXT("3DVoice"));
				// Tag added if someone wants to know if this voice component was created dynamically by this talker object.
				// If the pawn/character class already has a voice component added manually it will be looked for and "cached" in OnPlayerStatePawnSet.
				CachedAudioComponent3D->ComponentTags.Add(TEXT("DynamicallyCreated"));

				if (PlayerPawn->Implements<UOnsetVoipPawnInterface>())
				{
					IOnsetVoipPawnInterface::Execute_OnVoipAudioComponentCreated(PlayerPawn, CachedAudioComponent3D);
				}
			}
		}

		return CachedAudioComponent3D;
	}
#endif
}
