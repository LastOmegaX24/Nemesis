// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "OnsetVoipSoundWave.h"
#include "OnsetVoipAudioComponent.generated.h"

/**
 * The Onset VoIP audio component. Can be added manually to a pawn/character to prevent spawning and attaching one dynamically.
 */
UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent))
class ONSETVOIP_API UOnsetVoipAudioComponent : public UAudioComponent
{
	GENERATED_BODY()
	
public:
	UOnsetVoipAudioComponent();

#if !UE_SERVER
	//~ Begin UObject Interface
	virtual void PostInitProperties() override;
	//~ End UObject Interface

	//~ Begin UActorComponent Interface
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
#if !UE_BUILD_SHIPPING
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
#endif
	//~ End UActorComponent Interface
#endif

	// Procedural sound wave used to playback voice data.
	UPROPERTY(BlueprintReadOnly, Category = "OnsetVoip")
	TObjectPtr<UOnsetVoipSoundWave> VoipSoundWave;

	UPROPERTY(EditDefaultsOnly, Category = "OnsetVoip")
	TSubclassOf<UOnsetVoipSoundWave> DefaultOnsetVoipSoundWaveClass;

	// Describe this component and properties.
	virtual FString Describe() const;

protected:
	// Used for tracking when no this audio component should stop playing due to no more voice data being available.
	int32 StarvedDataCount = 0;

	int32 NumberOfFramesToStopPlaybackIfNoAudio = 0;

public:
	void SetNumberOfFramesToStopPlaybackIfNoAudio(int32 InNumberOfFramesToStopPlaybackIfNoAudio)
	{
		NumberOfFramesToStopPlaybackIfNoAudio = FMath::Max(0, InNumberOfFramesToStopPlaybackIfNoAudio);
	}
};
