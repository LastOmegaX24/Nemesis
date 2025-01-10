// Copyright 2024 Dev.GaeMyo. All Rights Reserved.

#include "AbilitySystem/GmAbilitySystemGlobals.h"

#include "AbilitySystem/GmGameplayEffectContext.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(GmAbilitySystemGlobals)

struct FGameplayEffectContext;

UGmAbilitySystemGlobals::UGmAbilitySystemGlobals(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FGameplayEffectContext* UGmAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FGmGameplayEffectContext();
}
