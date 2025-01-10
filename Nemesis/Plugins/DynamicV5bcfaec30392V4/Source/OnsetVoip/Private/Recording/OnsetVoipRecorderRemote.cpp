// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#if ONSETVOIP_ENABLE_VOICE_PROCESSING

#include "Recording/OnsetVoipRecorderRemote.h"
#include "OnsetVoip.h"
#include "Misc/Paths.h"

FOnsetVoipRecorderRemote::FOnsetVoipRecorderRemote(UOnsetVoipWorldSubsystem* InSubsystem)
	: Subsystem(InSubsystem)
{
	check(Subsystem.IsValid());
}

bool FOnsetVoipRecorderRemote::Init(EOnsetAudioRecordingFormat InRecordingFormat, const TOptional<FString>& InFilename)
{
	if (IOnsetVoipRecorder::Init(InRecordingFormat, InFilename))
	{
		RecordingDirectory = InFilename.IsSet() ? FPaths::GetPath(*InFilename) : GetRecordingDirectory();		

		RecordCaptureDelegate = Subsystem->Native_OnVoipAudioDataReceived.AddSP(this, &FOnsetVoipRecorderRemote::OnVoipAudioDataReceived);
		VoipTalkerDestroyedDelegate = Subsystem->Native_OnVoipTalkerDestroyed.AddSP(this, &FOnsetVoipRecorderRemote::OnVoipTalkerDestroyed);

		OnsetVoip::ConsoleLog(Subsystem.Get(), FString::Printf(TEXT("Remote talker recording started: %s"), *IOnsetVoipRecorder::GetRecordingDirectory()));
		return true;
	}
	return false;
}

FOnsetVoipRecorderRemote::~FOnsetVoipRecorderRemote()
{
	if (Subsystem.IsValid())
	{
		if (RecordCaptureDelegate.IsValid())
		{
			Subsystem->Native_OnVoipAudioDataReceived.Remove(RecordCaptureDelegate);
			RecordCaptureDelegate.Reset();
		}
		if (VoipTalkerDestroyedDelegate.IsValid())
		{
			Subsystem->Native_OnVoipTalkerDestroyed.Remove(VoipTalkerDestroyedDelegate);
			VoipTalkerDestroyedDelegate.Reset();
		}

		OnsetVoip::ConsoleLog(Subsystem.Get(), FString::Printf(TEXT("Remote talker recording stopped.")));
	}
}

void FOnsetVoipRecorderRemote::OnVoipAudioDataReceived(UOnsetVoipTalker* VoipTalker, const TArrayView<uint8>& AudioData, bool bIs2D)
{
	if (TSharedPtr<IOnsetAudioFile>* ExistingAudioFile = TalkerToAudioFileMap.Find(VoipTalker))
	{
		(*ExistingAudioFile)->Write(AudioData);

		GEngine->AddOnScreenDebugMessage(6143, 0.05f, FColor::Green, FString::Printf(TEXT("Recording %s to %s"), *VoipTalker->GetName(), *(*ExistingAudioFile)->GetFilename()), false);
	}
	else
	{
		if (APlayerState* PlayerState = VoipTalker->GetPlayerState())
		{
			const FString Filename = FPaths::Combine(RecordingDirectory, FString::Printf(TEXT("Remote_%s_%i_%s.%s"), *FDateTime::Now().ToString(), PlayerState->GetPlayerId(), *PlayerState->GetPlayerName(), GetBufferedAudioFileExtension(RecordingFormat)));

			TSharedPtr<IOnsetAudioFile> AudioFile = CreateAudioFile(Filename, RecordingFormat);
			if (AudioFile.IsValid())
			{
				AudioFile->Write(AudioData);

				GEngine->AddOnScreenDebugMessage(6143, 0.05f, FColor::Green, FString::Printf(TEXT("Recording %s to %s"), *VoipTalker->GetName(), *AudioFile->GetFilename()), false);

				TalkerToAudioFileMap.Add(VoipTalker, MoveTemp(AudioFile));
			}
		}
	}
}

void FOnsetVoipRecorderRemote::OnVoipTalkerDestroyed(UOnsetVoipTalker* VoipTalker)
{
	TalkerToAudioFileMap.Remove(VoipTalker);
}

FString FOnsetVoipRecorderRemote::GetRecordingFile() const
{
	return RecordingDirectory;
}

#endif /* ONSETVOIP_ENABLE_VOICE_PROCESSING */
