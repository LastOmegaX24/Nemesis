// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoipBlueprintFunctionLibrary.h"
#include "OnsetVoipWorldSubsystem.h"

void UOnsetVoipBlueprintLibrary::SetTalkerVoiceChannel(UOnsetVoipTalker* VoipTalker, int32 ChannelId, bool bAdd)
{
	if (VoipTalker)
	{
		VoipTalker->SetVoiceChannel(ChannelId, bAdd);
	}
}

bool UOnsetVoipBlueprintLibrary::IsTalkerInVoiceChannel(UOnsetVoipTalker* VoipTalker, int32 ChannelId)
{
	return VoipTalker && VoipTalker->IsInVoiceChannel(ChannelId);
}

UOnsetVoipTalker* UOnsetVoipBlueprintLibrary::GetTalkerByPlayerState(APlayerState* PlayerState, const UObject* WorldContextObject)
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (const UOnsetVoipWorldSubsystem* Subsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
		{
			return Subsystem->GetVoipTalker(PlayerState);
		}
	}

	return nullptr;
}

TArray<UOnsetVoipTalker*> UOnsetVoipBlueprintLibrary::GetAllTalkers(const UObject* WorldContextObject)
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (const UOnsetVoipWorldSubsystem* Subsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
		{
			return Subsystem->GetAllTalkers();
		}
	}

	TArray<UOnsetVoipTalker*> Empty;
	return Empty;
}

TArray<UOnsetVoipTalker*> UOnsetVoipBlueprintLibrary::GetAllTalkersInVoiceChannel(int32 ChannelId, const UObject* WorldContextObject)
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (const UOnsetVoipWorldSubsystem* Subsystem = World->GetSubsystem<UOnsetVoipWorldSubsystem>())
		{
			return Subsystem->GetAllTalkersInVoiceChannel(ChannelId);
		}
	}

	TArray<UOnsetVoipTalker*> Empty;
	return Empty;
}

void UOnsetVoipBlueprintLibrary::SetTalkerMutedForPlayerState(UOnsetVoipTalker* VoipTalker, bool bMute, APlayerState* PlayerState)
{
	if (VoipTalker)
	{
		VoipTalker->SetMutedForPlayerState(bMute, PlayerState);
	}
}

void UOnsetVoipBlueprintLibrary::SetTalkerMutedForVoipTalker(UOnsetVoipTalker* VoipTalker, bool bMute, UOnsetVoipTalker* OtherVoipTalker)
{
	if (VoipTalker)
	{
		VoipTalker->SetMutedForVoipTalker(bMute, OtherVoipTalker);
	}
}

bool UOnsetVoipBlueprintLibrary::IsTalkerMutedForVoipTalker(UOnsetVoipTalker* VoipTalker, UOnsetVoipTalker* OtherVoipTalker)
{
	return VoipTalker && VoipTalker->IsMutedForVoipTalker(OtherVoipTalker);
}

bool UOnsetVoipBlueprintLibrary::IsTalkerMutedForPlayerState(UOnsetVoipTalker* VoipTalker, APlayerState* PlayerState)
{
	return VoipTalker && VoipTalker->IsMutedForPlayerState(PlayerState);
}

void UOnsetVoipBlueprintLibrary::SetTalkerMutedOnVoiceChannel(UOnsetVoipTalker* VoipTalker, bool bMute, int32 ChannelId)
{
	if (VoipTalker)
	{
		VoipTalker->SetMutedOnVoiceChannel(bMute, ChannelId);
	}
}

bool UOnsetVoipBlueprintLibrary::IsTalkerMutedOnVoiceChannel(UOnsetVoipTalker* VoipTalker, int32 ChannelId)
{
	return VoipTalker && VoipTalker->IsMutedOnVoiceChannel(ChannelId);
}

