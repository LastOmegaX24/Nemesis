// Copyright (C) 2024 Blue Mountains GmbH. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OnsetVoipNameWidgetInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UOnsetVoipNameWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ONSETVOIP_API IOnsetVoipNameWidgetInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "OnsetVoip")
	void SetOwningPlayerState(APlayerState* PlayerState);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "OnsetVoip")
	void SetNameplatePlayerName(const FString& PlayerName);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "OnsetVoip")
	void SetNameplateSpeaking(bool bIsSpeaking);
};
