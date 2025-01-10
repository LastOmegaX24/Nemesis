// Copyright 2024 Dev.GaeMyo. All Rights Reserved.

#pragma once

#include "AbilitySystemGlobals.h"

#include "GmAbilitySystemGlobals.generated.h"

class UObject;
struct FGameplayEffectContext;

UCLASS(Config = Game)
class GMGAMEPLAYABILITYSYSTEM_API UGmAbilitySystemGlobals : public UAbilitySystemGlobals
{
	GENERATED_UCLASS_BODY()

	//~UAbilitySystemGlobals interface
	virtual FGameplayEffectContext* AllocGameplayEffectContext() const override;
	//~End of UAbilitySystemGlobals interface
};
