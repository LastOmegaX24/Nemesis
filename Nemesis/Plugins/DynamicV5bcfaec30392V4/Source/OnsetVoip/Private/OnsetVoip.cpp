// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#include "OnsetVoip.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Console.h"

DEFINE_LOG_CATEGORY(LogOnsetVoip);

void OnsetVoip::ConsoleLog(const UObject* WorldContextObject, const FString& Message)
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::ReturnNull))
	{
		if (const UGameViewportClient* GameViewport = World->GetGameViewport())
		{
			if (UConsole* Console = GameViewport->ViewportConsole)
			{
				Console->OutputText(Message);
			}
		}
	}

	UE_LOG(LogOnsetVoip, Log, TEXT("%s"), *Message);
}

#define LOCTEXT_NAMESPACE "FOnsetVoipModule"

void FOnsetVoipModule::StartupModule()
{
	UE_LOG(LogOnsetVoip, Log, TEXT("FOnsetVoipModule::StartupModule()"));
	UE_LOG(LogOnsetVoip, Log, TEXT("Version %hs"), ONSET_VOIP_VERSION);
}

void FOnsetVoipModule::ShutdownModule()
{
	UE_LOG(LogOnsetVoip, Log, TEXT("FOnsetVoipModule::ShutdownModule()"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOnsetVoipModule, OnsetVoip)
