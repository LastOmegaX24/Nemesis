// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Channel.h"
#include "OnsetVoipPacket.h"
#include "OnsetVoipNetRelevancy.h"
#include "OnsetVoipDataChannel.generated.h"

extern FName OnsetVoipChannelName;

/**
 * Custom data channel used for transmitting voice data.
 */
UCLASS()
class ONSETVOIP_API UOnsetVoipDataChannel : public UChannel
{
	GENERATED_BODY()

public:
	UOnsetVoipDataChannel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get())
		: UChannel(ObjectInitializer)
	{
		ChName = OnsetVoipChannelName;
	}

	//~ Begin UObject Interface
	virtual void PostInitProperties() override;
	//~ End UObject Interface

	//~ Begin UChannel Interface
	virtual void ReceivedBunch(FInBunch& Bunch) override;
	virtual FPacketIdRange SendBunch(FOutBunch* Bunch, bool Merge);
	virtual void Tick() override;
	virtual bool CanStopTicking() const override;
	virtual FString Describe() override;
	//~ End UChannel Interface

	// Finds the onset voip channel for a specific connection.
	static UOnsetVoipDataChannel* GetOnsetVoipChannel(const UNetDriver* NetDriver, const UNetConnection* NetConn);

#if !UE_SERVER
	// Replicates a 'local' voice packet recored on our end. Not needed on dedicated server.
	static void ReplicateLocalVoipPacket(const ULocalPlayer* LocalPlayer, const FOnsetVoipPacketPtr& VoipPacket);
#endif

	void AddVoipPacket(FOnsetVoicePacketWrapper&& VoipPacketWrapper);
	void AddVoipPacket(const FOnsetVoipPacketPtr& VoipPacket);

#if !UE_SERVER
	// Calculates average data trasnmitted on this voice channel. Resets to 0 if not called frequently after a short amount of time.
	void CalculateAverageThroughput(int64& OutAverageBytesSent, int64& OutAverageBytesReceived);
#endif

	// Can be overriden in PostInitProperties().
	TUniquePtr<FOnsetVoipNetRelevancy> VoipNetRelevancy;

private:
	// Outgoing voip packets.
	TArray<FOnsetVoicePacketWrapper> VoipPackets;

#if !UE_SERVER
	// Variables used for bandwidth analysis.
	int64 NumTotalBitsSent = 0;
	int64 NumTotalBitsReceived = 0;
	int64 LastNumTotalBits[2] = { 0 };
	double LastTimeAverageCalculated = 0.0;
#endif
};
