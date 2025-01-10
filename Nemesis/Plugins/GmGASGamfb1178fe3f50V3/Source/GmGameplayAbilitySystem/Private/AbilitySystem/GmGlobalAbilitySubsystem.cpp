// Copyright 2024 Dev.GaeMyo. All Rights Reserved.


#include "AbilitySystem/GmGlobalAbilitySubsystem.h"

#include "AbilitySystem/GmAbilitySystemComponent.h"

void FGlobalAppliedAbilityList::AddToAbilitySystemComponent(TSubclassOf<UGameplayAbility> InAbility,
                                                            UGmAbilitySystemComponent* InAbilitySystemComponent)
{
	if (Handles.Find(InAbilitySystemComponent))
	{
		RemoveFromAbilitySystemComponent(InAbilitySystemComponent);
	}

	Handles.Add(InAbilitySystemComponent,
		InAbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(InAbility->GetDefaultObject<UGameplayAbility>())));
}

void FGlobalAppliedAbilityList::RemoveFromAbilitySystemComponent(
	UGmAbilitySystemComponent* InAbilitySystemComponent)
{
	if (const FGameplayAbilitySpecHandle* SpecHandle{Handles.Find(InAbilitySystemComponent)})
	{
		InAbilitySystemComponent->ClearAbility(*SpecHandle);
		Handles.Remove(InAbilitySystemComponent);
	}
}

void FGlobalAppliedAbilityList::RemoveFromAll()
{
	for (auto& Handle : Handles)
	{
		if (Handle.Key)
		{
			Handle.Key->ClearAbility(Handle.Value);
		}
	}
	Handles.Empty();
}

void FGlobalAppliedEffectList::AddToAbilitySystemComponent(const TSubclassOf<UGameplayEffect> InEffect,
                                                           UGmAbilitySystemComponent* InAbilitySystemComponent)
{
	if (Handles.Find(InAbilitySystemComponent))
	{
		RemoveFromAbilitySystemComponent(InAbilitySystemComponent);
	}

	Handles.Add(InAbilitySystemComponent,
		InAbilitySystemComponent->ApplyGameplayEffectToSelf(InEffect->GetDefaultObject<UGameplayEffect>(),
			1, InAbilitySystemComponent->MakeEffectContext()));
}

void FGlobalAppliedEffectList::RemoveFromAbilitySystemComponent(UGmAbilitySystemComponent* InAbilitySystemComponent)
{
	if (const FActiveGameplayEffectHandle* EffectHandle{Handles.Find(InAbilitySystemComponent)})
	{
		InAbilitySystemComponent->RemoveActiveGameplayEffect(*EffectHandle);
		Handles.Remove(InAbilitySystemComponent);
	}
}

void FGlobalAppliedEffectList::RemoveFromAll()
{
	for (TTuple<TObjectPtr<UGmAbilitySystemComponent>, FActiveGameplayEffectHandle>& KVP : Handles)
	{
		if (KVP.Key)
		{
			KVP.Key->RemoveActiveGameplayEffect(KVP.Value);
		}
	}
	Handles.Empty();
}

UGmGlobalAbilitySubsystem::UGmGlobalAbilitySubsystem()
{
}

void UGmGlobalAbilitySubsystem::ApplyAbilityToAll(const TSubclassOf<UGameplayAbility> InAbility)
{
	if (InAbility.Get() && !AppliedAbilities.Contains(InAbility))
	{
		FGlobalAppliedAbilityList& Entry{AppliedAbilities.Add(InAbility)};
		for (UGmAbilitySystemComponent* AbilitySystemComponent : RegisteredAbilitySystemComponents)
		{
			Entry.AddToAbilitySystemComponent(InAbility, AbilitySystemComponent);
		}
	}
}

void UGmGlobalAbilitySubsystem::ApplyEffectToAll(const TSubclassOf<UGameplayEffect> InEffect)
{
	if (InEffect.Get() && !AppliedEffects.Contains(InEffect))
	{
		FGlobalAppliedEffectList& Entry{AppliedEffects.Add(InEffect)};
		for(UGmAbilitySystemComponent* AbilitySystemComponent : RegisteredAbilitySystemComponents)
		{
			Entry.AddToAbilitySystemComponent(InEffect, AbilitySystemComponent);
		}
	}
}

void UGmGlobalAbilitySubsystem::RemoveAbilityFromAll(const TSubclassOf<UGameplayAbility> InAbility)
{
	if (InAbility.Get() && AppliedAbilities.Contains(InAbility))
	{
		AppliedAbilities[InAbility].RemoveFromAll();
		AppliedAbilities.Remove(InAbility);
	}
}

void UGmGlobalAbilitySubsystem::RemoveEffectFromAll(const TSubclassOf<UGameplayEffect> InEffect)
{
	if (InEffect.Get() && AppliedEffects.Contains(InEffect))
	{
		AppliedEffects[InEffect].RemoveFromAll();
		AppliedEffects.Remove(InEffect);
	}
}

void UGmGlobalAbilitySubsystem::RegisterAbilitySystemComponent(
	UGmAbilitySystemComponent* InAbilitySystemComponent)
{
	check(InAbilitySystemComponent);

	for (auto& Entry : AppliedAbilities)
	{
		Entry.Value.AddToAbilitySystemComponent(Entry.Key, InAbilitySystemComponent);
	}
	for (auto& Entry : AppliedEffects)
	{
		Entry.Value.AddToAbilitySystemComponent(Entry.Key, InAbilitySystemComponent);
	}

	RegisteredAbilitySystemComponents.AddUnique(InAbilitySystemComponent);
}

void UGmGlobalAbilitySubsystem::UnregisterAbilitySystemComponent(
	UGmAbilitySystemComponent* InAbilitySystemComponent)
{
	check(InAbilitySystemComponent);

	for (auto& Entry : AppliedAbilities)
	{
		Entry.Value.RemoveFromAbilitySystemComponent(InAbilitySystemComponent);
	}
	for (auto& Entry : AppliedEffects)
	{
		Entry.Value.RemoveFromAbilitySystemComponent(InAbilitySystemComponent);
	}
	
	RegisteredAbilitySystemComponents.Remove(InAbilitySystemComponent);
}
