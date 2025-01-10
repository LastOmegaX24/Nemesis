// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

#define ONSET_VOIP_VERSION "1.6"

DECLARE_LOG_CATEGORY_EXTERN(LogOnsetVoip, Log, All);

namespace OnsetVoip
{
	ONSETVOIP_API void ConsoleLog(const UObject* WorldContextObject, const FString& Message);
}

class FOnsetVoipModule : public IModuleInterface
{
public:
	//~ Begin IModuleInterface Interface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//~ End IModuleInterface Interface
};
