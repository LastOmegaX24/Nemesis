// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Sound/SoundWaveProcedural.h"
#include "OnsetVoipSoundWave.generated.h"

/**
 * A procedural sound wave which is used to play voice data for a UOnsetVoipAudioComponent.
 */
UCLASS(Blueprintable)
class ONSETVOIP_API UOnsetVoipSoundWave : public USoundWaveProcedural
{
	GENERATED_BODY()
	
public:
	UOnsetVoipSoundWave(const FObjectInitializer& ObjectInitializer);

	//~ Begin UObject Interface 
	virtual void PostInitProperties() override;
	//~ End UObject Interface 

protected:
	// Called by the sound wave when it needs more audio samples. Drains VoiceAudioBuffer.
	void OnGenerateProceduralAudio(USoundWaveProcedural* InSoundWaveProcedural, int32 InSamplesToGenerate);

public:
	// Adds new audio data to this procedural audio wave.
	virtual void AddAudioData(const uint8* InAudioData, const int32 InAudioDataSize);
	virtual void AddAudioData(const TArrayView<uint8>& InAudioData);

	// Blueprint version for adding new audio data to this procedural audio wave.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip")
	virtual void AddAudioData(const TArray<uint8>& InAudioData);

	// Current size of the audio buffer pending to be queued.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip")
	virtual int32 GetAudioBufferSize() const;

	// Resets audio data that is queued to be sent to the procedural sound wave.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip")
	virtual void ResetAudioBuffer();

	// Get sound attenuation.
	UFUNCTION(BlueprintPure, Category = "OnsetVoip")
	virtual USoundAttenuation* GetAttenuation() const;

	// Set sound attenuation.
	UFUNCTION(BlueprintCallable, Category = "OnsetVoip")
	virtual void SetAttenuation(USoundAttenuation* Attenuation);

	virtual FString Describe() const;

protected:
	// Mutex for accessing AudioBuffer in OnGenerateProceduralAudio from audio threads.
	mutable FCriticalSection AudioQueueLock;
	TArray<uint8> VoiceAudioBuffer;
	double LastTimeAudioBuffered;
	double MaxBufferPlaybackDelay;
	int32 MaxBufferToPlay;
};
