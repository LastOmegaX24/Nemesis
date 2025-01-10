// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#if ONSETVOIP_ENABLE_VOICE_PROCESSING

#include "Recording/OnsetVoipRecorderRemoteSingleFile.h"
#include "OnsetVoip.h"
#include "TimerManager.h"
#include "Misc/Paths.h"
#include "DSP/AlignedBuffer.h"
#include "DSP/FloatArrayMath.h"

FOnsetVoipRecorderRemoteSingleFile::FOnsetVoipRecorderRemoteSingleFile(UOnsetVoipWorldSubsystem* InSubsystem)
	: Subsystem(InSubsystem)
{
	check(Subsystem.IsValid());
}

bool FOnsetVoipRecorderRemoteSingleFile::Init(EOnsetAudioRecordingFormat InRecordingFormat, const TOptional<FString>& InFilename)
{
	if (IOnsetVoipRecorder::Init(InRecordingFormat, InFilename))
	{
		const FString Filename = InFilename.IsSet() ? *InFilename : FPaths::Combine(GetRecordingDirectory(), FString::Printf(TEXT("Remote_%s.%s"), *FDateTime::Now().ToString(), GetBufferedAudioFileExtension(RecordingFormat)));
		AudioFile = CreateAudioFile(Filename, RecordingFormat);

		if (AudioFile.IsValid())
		{
			float VoipRecorderRenderTime = 0.6f;
			FParse::Value(FCommandLine::Get(), TEXT("VoipRecorderRenderTime="), VoipRecorderRenderTime);

			RecordCaptureDelegate = Subsystem->Native_OnVoipAudioDataReceived.AddSP(this, &FOnsetVoipRecorderRemoteSingleFile::OnVoipAudioDataReceived);

			Subsystem->GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateSP(this, &FOnsetVoipRecorderRemoteSingleFile::OnRenderAudioData), VoipRecorderRenderTime, /*InbLoop=*/true);

			OnsetVoip::ConsoleLog(Subsystem.Get(), FString::Printf(TEXT("Remote talker recording started: %s (VoipRecorderRenderTime: %2f)"), *AudioFile->GetFilename(), VoipRecorderRenderTime));
			return true;
		}
	}

	OnsetVoip::ConsoleLog(Subsystem.Get(), TEXT("Unable to start remote talker recording."));
	return false;
}

FOnsetVoipRecorderRemoteSingleFile::~FOnsetVoipRecorderRemoteSingleFile()
{
	if (Subsystem.IsValid() && RecordCaptureDelegate.IsValid())
	{
		Subsystem->Native_OnVoipAudioDataReceived.Remove(RecordCaptureDelegate);
		RecordCaptureDelegate.Reset();

		OnsetVoip::ConsoleLog(Subsystem.Get(), FString::Printf(TEXT("Remote talker recording stopped.")));
	}

	TimerHandle.Invalidate();
}

void FOnsetVoipRecorderRemoteSingleFile::OnRenderAudioData()
{
	if (!AudioFile.IsValid() || GEngine == nullptr)
	{
		CachedAudioData.Empty();
		return;
	}

	int32 MaxCachedAudioDataLength = 0;
	for (const auto& MapPair : CachedAudioData)
	{
		if (MapPair.Value.Num() > MaxCachedAudioDataLength)
		{
			MaxCachedAudioDataLength = MapPair.Value.Num();
		}
	}
	
	if (MaxCachedAudioDataLength == 0)
	{
		return;
	}

	const int32 FixedBufferLengthInt16 = MaxCachedAudioDataLength * sizeof(uint8) / sizeof(int16);

	TArray<float> MixedBuffer;
	MixedBuffer.AddZeroed(FixedBufferLengthInt16);

	for (auto& MapPair : CachedAudioData)
	{
		MapPair.Value.SetNumZeroed(MaxCachedAudioDataLength);
		uint8* AudioDataPtr = MapPair.Value.GetData();

		TArray<int16> Pcm16;
		Pcm16.AddUninitialized(FixedBufferLengthInt16);

		for (int32 i = 0, pcm16i = 0; i < MaxCachedAudioDataLength; i += 2, pcm16i++)
		{
			const int16 Sample = *(AudioDataPtr + i) | (*(AudioDataPtr + i + 1) << 8);

			Pcm16[pcm16i] = Sample;
		}

		Audio::FAlignedFloatBuffer TransformationsBuffer;
		TransformationsBuffer.AddUninitialized(FixedBufferLengthInt16);
		Audio::ArrayPcm16ToFloat(Pcm16, TransformationsBuffer);

		/*float MeanSqaured = 0.0f;
		Audio::ArrayMeanSquared(TransformationsBuffer, MeanSqaured);
		float RootMeansSquared = FMath::Sqrt(MeanSqaured);

		float GainFactorAGC = 0.0f;
		if (RootMeansSquared > 0.0f)
		{
			GainFactorAGC = FMath::Clamp(3.0f / RootMeansSquared, 0.01f, 10.0f);

			Audio::ArrayMultiplyByConstantInPlace(TransformationsBuffer, GainFactorAGC);
		}*/

		Audio::ArrayMixIn(TransformationsBuffer, MixedBuffer);
	}

	CachedAudioData.Empty();

	TArray<int16> MixedBufferInt;
	MixedBufferInt.AddUninitialized(MixedBuffer.Num());
	Audio::ArrayFloatToPcm16(MixedBuffer, MixedBufferInt);

	TArray<uint8> Pcm8;
	Pcm8.AddUninitialized(MixedBufferInt.Num() * sizeof(int16));
	uint8* AudioDataPtr = Pcm8.GetData();

	for (int32 i = 0, pcm16i = 0; i < Pcm8.Num() && pcm16i < MixedBufferInt.Num(); i += 2, pcm16i++)
	{
		const int16 Sample = MixedBufferInt[pcm16i];

		*(AudioDataPtr + i) = Sample & 0xFF;
		*(AudioDataPtr + i + 1) = (Sample >> 8) & 0xFF;
	}

	AudioFile->Write(Pcm8);

	GEngine->AddOnScreenDebugMessage(6142, 0.05f, FColor::Green, FString::Printf(TEXT("Recording remote talkers to %s"), *AudioFile->GetFilename()), false);
}

void FOnsetVoipRecorderRemoteSingleFile::OnVoipAudioDataReceived(UOnsetVoipTalker* VoipTalker, const TArrayView<uint8>& AudioData, bool bIs2D)
{
	TArray<uint8>& PlayerAudioData = CachedAudioData.FindOrAdd(VoipTalker);
	const int32 ElementsBefore = PlayerAudioData.AddUninitialized(AudioData.Num());
	FMemory::Memcpy(PlayerAudioData.GetData() + ElementsBefore, AudioData.GetData(), AudioData.Num());
}

FString FOnsetVoipRecorderRemoteSingleFile::GetRecordingFile() const
{
	return AudioFile.IsValid() ? AudioFile->GetFilename() : TEXT("");
}

#endif /* ONSETVOIP_ENABLE_VOICE_PROCESSING */
