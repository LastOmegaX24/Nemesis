// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#if !UE_SERVER

#include "Recording/OnsetVoipRecorder.h"
#include "OnsetVoipLocalPlayerSubsystem.h"

class ONSETVOIP_API FOnsetVoipRecorderLocal : public IOnsetVoipRecorder
{
public:
	FOnsetVoipRecorderLocal(class UOnsetVoipLocalPlayerSubsystem* InSubsystem);

	virtual bool Init(EOnsetAudioRecordingFormat InRecordingFormat, const TOptional<FString>& InFilename = TOptional<FString>()) override;

	~FOnsetVoipRecorderLocal();

	void OnVoipMicrophoneAudioCaptured(const TArrayView<uint8>& AudioData);

	virtual FString GetRecordingFile() const override;

private:
	TWeakObjectPtr<UOnsetVoipLocalPlayerSubsystem> Subsystem;
	TSharedPtr<IOnsetAudioFile> AudioFile;
};

#endif
