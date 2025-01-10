// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipSoundWave.h"
#include "OnsetVoip.h"
#include "OnsetVoipSettings.h"

UOnsetVoipSoundWave::UOnsetVoipSoundWave(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetSampleRate(GetDefault<UOnsetVoipSettings>()->VoiceCaptureSampleRate);
	NumChannels = GetDefault<UOnsetVoipSettings>()->VoiceCaptureChannels;
	Volume = GetDefault<UOnsetVoipSettings>()->DefaultSoundWaveVolume;
	Duration = INDEFINITELY_LOOPING_DURATION;
	SoundGroup = SOUNDGROUP_Voice;
	bLooping = false;
	bCanProcessAsync = true;
	VirtualizationMode = EVirtualizationMode::PlayWhenSilent;
	LastTimeAudioBuffered = 0.0;
	MaxBufferPlaybackDelay = FMath::Max(0.1, GetDefault<UOnsetVoipSettings>()->MaxBufferPlaybackDelay);
	MaxBufferToPlay = FMath::CeilToInt32(SampleRate * MaxBufferPlaybackDelay) * SampleByteSize * NumChannels;
	ensureAlwaysMsgf(MaxBufferToPlay % 2 == 0, TEXT("MaxBufferToPlay %i"), MaxBufferToPlay);
}

void UOnsetVoipSoundWave::PostInitProperties()
{
	Super::PostInitProperties();

	if (!HasAnyFlags(RF_ClassDefaultObject | RF_ArchetypeObject))
	{
		OnSoundWaveProceduralUnderflow.BindUObject(this, &UOnsetVoipSoundWave::OnGenerateProceduralAudio);

		UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("UOnsetVoipSoundWave::PostInitProperties() with SampleRate of %i and NumChannels of %i and a SampleByteSize of %i"), SampleRate, NumChannels, SampleByteSize);
	}
}

void UOnsetVoipSoundWave::OnGenerateProceduralAudio(USoundWaveProcedural* InSoundWaveProcedural, int32 InSamplesToGenerate)
{
	FScopeLock ScopeLock(&AudioQueueLock);
	const int32 VoiceAudioBufferSize = VoiceAudioBuffer.Num();
	if (VoiceAudioBufferSize > 0 &&
		(VoiceAudioBufferSize / (SampleByteSize * NumChannels)) >= InSamplesToGenerate)
	{
		if (FPlatformTime::Seconds() - LastTimeAudioBuffered < MaxBufferPlaybackDelay)
		{
			const int32 PlayStartPos = VoiceAudioBufferSize > MaxBufferToPlay ? VoiceAudioBufferSize - MaxBufferToPlay : 0;
			const int32 PlayLength = FMath::Min(MaxBufferToPlay, VoiceAudioBufferSize);

			UE_CLOG(PlayStartPos > 0, LogOnsetVoip, VeryVerbose, TEXT("Skipping %i bytes of old audio data."), PlayStartPos);
			UE_LOG(LogOnsetVoip, VeryVerbose, TEXT("Queueing %i bytes of procedural audio data [InSamplesToGenerate %i] [ThreadId %d]"), PlayLength, InSamplesToGenerate, FPlatformTLS::GetCurrentThreadId());

			InSoundWaveProcedural->QueueAudio(VoiceAudioBuffer.GetData() + PlayStartPos, PlayLength);
		}

		VoiceAudioBuffer.Empty();
	}
}

void UOnsetVoipSoundWave::AddAudioData(const uint8* InAudioData, const int32 InAudioDataSize)
{
	FScopeLock ScopeLock(&AudioQueueLock);
	const int32 OldBufferSize = VoiceAudioBuffer.AddUninitialized(InAudioDataSize);
	FMemory::Memcpy(VoiceAudioBuffer.GetData() + OldBufferSize, InAudioData, InAudioDataSize);
	LastTimeAudioBuffered = FPlatformTime::Seconds();
}

void UOnsetVoipSoundWave::AddAudioData(const TArray<uint8>& InAudioData)
{
	AddAudioData(InAudioData.GetData(), InAudioData.Num());
}

void UOnsetVoipSoundWave::AddAudioData(const TArrayView<uint8>& InAudioData)
{
	AddAudioData(InAudioData.GetData(), InAudioData.Num());
}

int32 UOnsetVoipSoundWave::GetAudioBufferSize() const
{
	FScopeLock ScopeLock(&AudioQueueLock);
	return VoiceAudioBuffer.Num();
}

void UOnsetVoipSoundWave::ResetAudioBuffer()
{
	FScopeLock ScopeLock(&AudioQueueLock);
	VoiceAudioBuffer.Empty();
	LastTimeAudioBuffered = 0.0;
}

USoundAttenuation* UOnsetVoipSoundWave::GetAttenuation() const
{
	return AttenuationSettings;
}

void UOnsetVoipSoundWave::SetAttenuation(USoundAttenuation* Attenuation)
{
	AttenuationSettings = Attenuation;
}

FString UOnsetVoipSoundWave::Describe() const
{
	return FString::Printf(TEXT("[%s AttenuationSettings: %s, SourceEffectChain: %s]"),
		*GetName(), AttenuationSettings ? *AttenuationSettings->GetPathName() : TEXT(""), SourceEffectChain ? *SourceEffectChain->GetPathName() : TEXT(""));
}
