// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if ONSETVOIP_ENABLE_VOICE_PROCESSING

#include "Recording/OnsetVoipRecorder.h"
#include "OnsetVoipWorldSubsystem.h"

class ONSETVOIP_API FOnsetVoipRecorderRemote : public IOnsetVoipRecorder
{
public:
	typedef TMap<TWeakObjectPtr<UOnsetVoipTalker>, TSharedPtr<IOnsetAudioFile>> TTalkerToAudioFileMap;

	FOnsetVoipRecorderRemote(UOnsetVoipWorldSubsystem* InSubsystem);

	virtual bool Init(EOnsetAudioRecordingFormat InRecordingFormat, const TOptional<FString>& InFilename = TOptional<FString>()) override;

	~FOnsetVoipRecorderRemote();

	void OnVoipAudioDataReceived(UOnsetVoipTalker* VoipTalker, const TArrayView<uint8>& AudioData, bool bIs2D);

	void OnVoipTalkerDestroyed(UOnsetVoipTalker* VoipTalker);

	virtual FString GetRecordingFile() const override;

private:
	FString RecordingDirectory;
	TWeakObjectPtr<UOnsetVoipWorldSubsystem> Subsystem;
	FDelegateHandle VoipTalkerDestroyedDelegate;
	TTalkerToAudioFileMap TalkerToAudioFileMap;
};

#endif
