// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ONSETVOIP_ENABLE_VOICE_PROCESSING

#include "Engine/TimerHandle.h"
#include "Recording/OnsetVoipRecorder.h"
#include "OnsetVoipWorldSubsystem.h"

class ONSETVOIP_API FOnsetVoipRecorderRemoteSingleFile : public IOnsetVoipRecorder
{
public:
	typedef TMap<TWeakObjectPtr<UOnsetVoipTalker>, TArray<float>> TTalkerToAudioFileMap;

	FOnsetVoipRecorderRemoteSingleFile(UOnsetVoipWorldSubsystem* InSubsystem);

	virtual bool Init(EOnsetAudioRecordingFormat InRecordingFormat, const TOptional<FString>& InFilename = TOptional<FString>()) override;

	~FOnsetVoipRecorderRemoteSingleFile();

	void OnRenderAudioData();

	void OnVoipAudioDataReceived(UOnsetVoipTalker* VoipTalker, const TArrayView<uint8>& AudioData, bool bIs2D);

	virtual FString GetRecordingFile() const override;

private:
	TMap<UOnsetVoipTalker*, TArray<uint8>> CachedAudioData;
	FTimerHandle TimerHandle;
	TWeakObjectPtr<UOnsetVoipWorldSubsystem> Subsystem;
	TSharedPtr<IOnsetAudioFile> AudioFile;
};

#endif
