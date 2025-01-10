// Copyright Dev.GaeMyo 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "ActiveGameplayEffectHandle.h"
#include "GameplayAbilitySpecHandle.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/WorldSubsystem.h"

#include "GmGlobalAbilitySubsystem.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UGmAbilitySystemComponent;
class UObject;
struct FActiveGameplayEffectHandle;
struct FFrame;
struct FGameplayAbilitySpecHandle;

USTRUCT()
struct FGlobalAppliedAbilityList
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<TObjectPtr<UGmAbilitySystemComponent>, FGameplayAbilitySpecHandle> Handles;

	void AddToAbilitySystemComponent(TSubclassOf<UGameplayAbility> InAbility, UGmAbilitySystemComponent* InAbilitySystemComponent);
	void RemoveFromAbilitySystemComponent(UGmAbilitySystemComponent* InAbilitySystemComponent);
	void RemoveFromAll();
};

USTRUCT()
struct FGlobalAppliedEffectList
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<TObjectPtr<UGmAbilitySystemComponent>, FActiveGameplayEffectHandle> Handles;

	void AddToAbilitySystemComponent(TSubclassOf<UGameplayEffect> InEffect, UGmAbilitySystemComponent* InAbilitySystemComponent);
	void RemoveFromAbilitySystemComponent(UGmAbilitySystemComponent* InAbilitySystemComponent);
	void RemoveFromAll();
};

UCLASS()
class GMGAMEPLAYABILITYSYSTEM_API UGmGlobalAbilitySubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	UGmGlobalAbilitySubsystem();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "GmGAS")
	void ApplyAbilityToAll(TSubclassOf<UGameplayAbility> InAbility);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "GmGAS")
	void ApplyEffectToAll(TSubclassOf<UGameplayEffect> InEffect);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "GmGAS")
	void RemoveAbilityFromAll(TSubclassOf<UGameplayAbility> InAbility);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "GmGAS")
	void RemoveEffectFromAll(TSubclassOf<UGameplayEffect> InEffect);

	/** Register an ASC with global system and apply any active global effects/abilities. */
	void RegisterAbilitySystemComponent(UGmAbilitySystemComponent* InAbilitySystemComponent);

	/** Removes an ASC from the global system, along with any active global effects/abilities. */
	void UnregisterAbilitySystemComponent(UGmAbilitySystemComponent* InAbilitySystemComponent);

private:

	UPROPERTY()
	TMap<TSubclassOf<UGameplayAbility>, FGlobalAppliedAbilityList> AppliedAbilities;

	UPROPERTY()
	TMap<TSubclassOf<UGameplayEffect>, FGlobalAppliedEffectList> AppliedEffects;

	UPROPERTY()
	TArray<TObjectPtr<UGmAbilitySystemComponent>> RegisteredAbilitySystemComponents;
};
