// Copyright 2024 Dev.GaeMyo. All Rights Reserved.


#include "AbilitySystem/GmAbilitySystemComponent.h"

// #include "GmLogChannels.h"
#include <Engine/World.h>
#include <GameFramework/Pawn.h>
#include "AbilitySystem/GmAbilityTagRelationshipMapping.h"
#include "AbilitySystem/GmGlobalAbilitySubsystem.h"
#include "AbilitySystem/Abilities/GmGameplayAbility.h"
// #include "System/GmAssetManager.h"
// #include "System/GmGameData.h"

UE_DEFINE_GAMEPLAY_TAG(TAG_Gameplay_AbilityInputBlocked, "Gameplay.AbilityInputBlocked");

UGmAbilitySystemComponent::UGmAbilitySystemComponent(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	InputPressedSpecHandles.Reset();
	InputReleasedSpecHandles.Reset();
	InputHeldSpecHandles.Reset();

	FMemory::Memset(ActivationGroupCounts, 0, sizeof(ActivationGroupCounts));
}

void UGmAbilitySystemComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (UGmGlobalAbilitySubsystem* GlobalAbilitySubsystem{
		UWorld::GetSubsystem<UGmGlobalAbilitySubsystem>(GetWorld())})
	{
		GlobalAbilitySubsystem->UnregisterAbilitySystemComponent(this);
	}
	
	Super::EndPlay(EndPlayReason);
}

void UGmAbilitySystemComponent::InitAbilityActorInfo(AActor* InOwnerActor, AActor* InAvatarActor)
{
	const FGameplayAbilityActorInfo* ActorInfo{AbilityActorInfo.Get()};
	check(ActorInfo);
	check(InOwnerActor);
	
	Super::InitAbilityActorInfo(InOwnerActor, InAvatarActor);

	// Has not New Pawn Avatar
	if (Cast<APawn>(InAvatarActor) && InAvatarActor != ActorInfo->AvatarActor)
	{
		return;
	}

	// Notify all abilities that a new pawn avatar has been set
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		UGmGameplayAbility* GmUcfAbilityCDO{Cast<UGmGameplayAbility>(AbilitySpec.Ability)};
		if (!GmUcfAbilityCDO)
		{
			continue;
		}

		if (GmUcfAbilityCDO->GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
		{
			for (UGameplayAbility* AbilityInst : AbilitySpec.GetAbilityInstances())
			{
				if (UGmGameplayAbility* GmUcfGameplayAbility{Cast<UGmGameplayAbility>(AbilityInst)})
				{
					// Ability instances may be missing for replays
					GmUcfGameplayAbility->OnPawnAvatarSet();
				}
			}
		}
		else
		{
			GmUcfAbilityCDO->OnPawnAvatarSet();
		}
	}

	// Register with the global system once we actually have a pawn avatar. We wait until this time since some globally-applied effects may require an avatar.
	if (UGmGlobalAbilitySubsystem* GlobalAbilitySystem{UWorld::GetSubsystem<UGmGlobalAbilitySubsystem>(GetWorld())})
	{
		GlobalAbilitySystem->RegisterAbilitySystemComponent(this);
	}

	//@TODO By DevGaeMyo : Execute anim instance related logic in the inherited class.
	InitializeAnimInstance(ActorInfo->GetAnimInstance());
	// if (UGmAnimInstance* GmAnimInst{Cast<UGmAnimInstance>(ActorInfo->GetAnimInstance())})
	// {
	// 	GmAnimInst->InitializeWithAbilitySystem(this);
	// }

	TryActivateAbilitiesOnSpawn();
}

void UGmAbilitySystemComponent::CancelAbilitiesByFunc(const TShouldCancelAbilityFunc& ShouldCancelFunc,
                                                      const bool bReplicateCancelAbility)
{
	ABILITYLIST_SCOPE_LOCK();
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		if (!AbilitySpec.IsActive())
		{
			continue;
		}

		UGmGameplayAbility* GmUCFAbilityCDO{Cast<UGmGameplayAbility>(AbilitySpec.Ability)};
		if (!GmUCFAbilityCDO)
		{
			// UE_LOG(LogGmUCFAbilitySystem, Error,
				// L"CancelAbilitiesByFunc: Non-GmGameplayAbility %s was Granted to ASC. Skipping.",
				// *AbilitySpec.Ability.GetName());
			continue;
		}

		if (GmUCFAbilityCDO->GetInstancingPolicy() != EGameplayAbilityInstancingPolicy::NonInstanced)
		{
			// Cancel all the spawned instances, not the CDO.
			TArray Instances{AbilitySpec.GetAbilityInstances()};
			for (UGameplayAbility* AbilityInstance : Instances)
			{
				if (UGmGameplayAbility* GmUCFAbilityInstance{CastChecked<UGmGameplayAbility>(AbilityInstance)};
					ShouldCancelFunc(GmUCFAbilityInstance, AbilitySpec.Handle))
				{
					if (GmUCFAbilityInstance->CanBeCanceled())
					{
						GmUCFAbilityInstance->CancelAbility(AbilitySpec.Handle, AbilityActorInfo.Get(),
							GmUCFAbilityInstance->GetCurrentActivationInfo(), bReplicateCancelAbility);
					}
					else
					{
						// UE_LOG(LogGmUCFAbilitySystem, Error,
						// 	L"CancelAbilitiesByFunc: Can't cancel ability [%s] because CanBeCanceled is false.",
						// 	*GmUCFAbilityInstance->GetName());
					}
				}
			}
		}
		else
		{
			// Cancel the non-instanced ability CDO.
			if (ShouldCancelFunc(GmUCFAbilityCDO, AbilitySpec.Handle))
			{
				// Non-instanced abilities can always be canceled.
				check(GmUCFAbilityCDO->CanBeCanceled());
				GmUCFAbilityCDO->CancelAbility(AbilitySpec.Handle, AbilityActorInfo.Get(),
					FGameplayAbilityActivationInfo(), bReplicateCancelAbility);
			}
		}
	}
}

void UGmAbilitySystemComponent::CancelInputActivatedAbilities(const bool bReplicateCancelAbility)
{
	auto ShouldCancelFunc = [this](const UGmGameplayAbility* GmUCFAbility, FGameplayAbilitySpecHandle Handle)->bool
	{
		const EGmAbilityActivationPolicy ActivationPolicy{GmUCFAbility->GetActivationPolicy()};
		return ActivationPolicy == EGmAbilityActivationPolicy::OnInputTriggered ||
			ActivationPolicy == EGmAbilityActivationPolicy::WhileInputActive;
	};

	CancelAbilitiesByFunc(ShouldCancelFunc, bReplicateCancelAbility);
}

void UGmAbilitySystemComponent::AbilityInputTagPressed(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid())
	{
		return;
	}
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		if (AbilitySpec.Ability && AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			InputPressedSpecHandles.AddUnique(AbilitySpec.Handle);
			InputHeldSpecHandles.AddUnique(AbilitySpec.Handle);
		}
	}
}

void UGmAbilitySystemComponent::AbilityInputTagReleased(const FGameplayTag& InputTag)
{
	if (!InputTag.IsValid())
	{
		return;
	}
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		if (AbilitySpec.Ability && AbilitySpec.DynamicAbilityTags.HasTagExact(InputTag))
		{
			InputReleasedSpecHandles.AddUnique(AbilitySpec.Handle);
			InputHeldSpecHandles.Remove(AbilitySpec.Handle);
		}
	}
}

void UGmAbilitySystemComponent::ProcessAbilityInput(float DeltaTime, bool bGamePaused)
{
	if (HasMatchingGameplayTag(TAG_Gameplay_AbilityInputBlocked))
	{
		ClearAbilityInput();
		return;
	}

	static TArray<FGameplayAbilitySpecHandle> AbilitiesToActivate;
	AbilitiesToActivate.Reset();

	//@TODO: See if we can use FScopedServerAbilityRPCBatcher ScopedRPCBatcher in some of these loops

	//
	// Process all abilities that activate when the input is held.
	//
	for (const FGameplayAbilitySpecHandle& SpecHandle : InputHeldSpecHandles)
	{
		if (const FGameplayAbilitySpec* AbilitySpec{FindAbilitySpecFromHandle(SpecHandle)})
		{
			if (AbilitySpec->Ability && !AbilitySpec->IsActive())
			{
				if (const UGmGameplayAbility* GmUcfAbilityCDO{Cast<UGmGameplayAbility>(AbilitySpec->Ability)};
					GmUcfAbilityCDO &&
					GmUcfAbilityCDO->GetActivationPolicy() == EGmAbilityActivationPolicy::WhileInputActive)
				{
					AbilitiesToActivate.AddUnique(AbilitySpec->Handle);
				}
			}
		}
	}

	//
	// Process all abilities that had their input pressed this frame.
	//
	for (const FGameplayAbilitySpecHandle& SpecHandle : InputPressedSpecHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec{FindAbilitySpecFromHandle(SpecHandle)})
		{
			if (AbilitySpec->Ability)
			{
				// UE_LOG(LogGmUCFAbilitySystem, Error, L"AbilitySpec->Ability is %s.", *GetNameSafe(AbilitySpec->Ability));
				AbilitySpec->InputPressed = true;

				//@TODO By DevGaeMyo : Remove this debug annotation.
				// UE_LOG(LogGmUCFAbilitySystem, Error, L"GA : %s - Pressed.", *GetNameSafe(AbilitySpec->Ability));

				if (AbilitySpec->IsActive())
				{
					// Ability is active so pass along the input event.
					AbilitySpecInputPressed(*AbilitySpec);
				}
				else if(const UGmGameplayAbility* GmAbilityCDO{
					Cast<UGmGameplayAbility>(AbilitySpec->Ability)}; GmAbilityCDO &&
					GmAbilityCDO->GetActivationPolicy() == EGmAbilityActivationPolicy::OnInputTriggered)
				{
					AbilitiesToActivate.AddUnique(AbilitySpec->Handle);
				}
			}
		}
	}

	//
	// Try to activate all the abilities that are from presses and holds.
	// We do it all at once so that held inputs don't activate the ability
	// and then also send a input event to the ability because of the press.
	//
	for (const FGameplayAbilitySpecHandle& AbilitySpecHandle : AbilitiesToActivate)
	{
		TryActivateAbility(AbilitySpecHandle);
	}

	//
	// Process all abilities that had their input released this frame.
	//
	for (const FGameplayAbilitySpecHandle& SpecHandle : InputReleasedSpecHandles)
	{
		if (FGameplayAbilitySpec* AbilitySpec{FindAbilitySpecFromHandle(SpecHandle)})
		{
			if (AbilitySpec->Ability)
			{
				AbilitySpec->InputPressed = false;
				
				//@TODO By DevGaeMyo : Remove this debug annotation.
				// UE_LOG(LogGmUCFAbilitySystem, Error, L"GA : %s - Released.", *GetNameSafe(AbilitySpec->Ability));

				if (AbilitySpec->IsActive())
				{
					// Ability is active so pass along the input event.
					AbilitySpecInputReleased(*AbilitySpec);
				}
			}
		}
	}

	//
	// Clear the cached ability handles.
	//
	InputPressedSpecHandles.Reset();
	InputReleasedSpecHandles.Reset();
}

void UGmAbilitySystemComponent::ClearAbilityInput()
{
	InputPressedSpecHandles.Reset();
	InputReleasedSpecHandles.Reset();
	InputHeldSpecHandles.Reset();
}

bool UGmAbilitySystemComponent::IsActivationGroupBlocked(const EGmAbilityActivationGroup Group) const
{
	bool bBlocked{false};

	switch (Group)
	{
		case EGmAbilityActivationGroup::Independent:
		// Independent abilities are never blocked.
			bBlocked = false;
		break;

		case EGmAbilityActivationGroup::Exclusive_Replaceable:
		case EGmAbilityActivationGroup::Exclusive_Blocking:
		// Exclusive abilities can activate if nothing is blocking.
		bBlocked = ActivationGroupCounts[(uint8)EGmAbilityActivationGroup::Exclusive_Blocking] > 0;
		break;

	default:
		// checkf(false, L"IsActivationGroupBlocked: Invalid ActivationGroup [%d]\n", (uint8)Group);
		break;
	}

	return bBlocked;
}

void UGmAbilitySystemComponent::AddAbilityToActivationGroup(const EGmAbilityActivationGroup Group,
	UGmGameplayAbility* InGmUCFAbility)
{
	check(InGmUCFAbility);
	check(ActivationGroupCounts[(uint8)Group] < INT32_MAX);

	ActivationGroupCounts[(uint8)Group]++;

	constexpr bool bReplicateCancelAbility{false};

	switch (Group)
	{
		case EGmAbilityActivationGroup::Independent:
		// Independent abilities do not cancel any other abilities.
			break;

		case EGmAbilityActivationGroup::Exclusive_Replaceable:
		case EGmAbilityActivationGroup::Exclusive_Blocking:
		CancelActivationGroupAbilities(EGmAbilityActivationGroup::Exclusive_Replaceable, InGmUCFAbility,
			bReplicateCancelAbility);
		break;

		default:
			// checkf(false, L"AddAbilityToActivationGroup: Invalid ActivationGroup [%d]\n", (uint8)Group);
		break;
	}

	if (!ensure((ActivationGroupCounts[(uint8)EGmAbilityActivationGroup::Exclusive_Replaceable] +
		ActivationGroupCounts[(uint8)EGmAbilityActivationGroup::Exclusive_Blocking]) <= 1))
	{
		// UE_LOG(LogGmUCFAbilitySystem, Error,
			// L"AddAbilityToActivationGroup: Multiple exclusive abilities are running.");
	}
}

void UGmAbilitySystemComponent::RemoveAbilityFromActivationGroup(const EGmAbilityActivationGroup Group,
                                                                     const UGmGameplayAbility* InGmUCFAbility)
{
	check(InGmUCFAbility);
	check(ActivationGroupCounts[(uint8)Group] > 0);

	ActivationGroupCounts[(uint8)Group]--;
}

void UGmAbilitySystemComponent::CancelActivationGroupAbilities(const EGmAbilityActivationGroup Group,
	UGmGameplayAbility* IgnoreGmUCFAbility, bool bReplicateCancelAbility)
{
	auto ShouldCancelFunc{[this, Group, IgnoreGmUCFAbility](const UGmGameplayAbility* InGmUCFAbility,
		FGameplayAbilitySpecHandle Handle)->bool
	{
		return InGmUCFAbility->GetActivationGroup() == Group && InGmUCFAbility != IgnoreGmUCFAbility;
	}};

	CancelAbilitiesByFunc(ShouldCancelFunc, bReplicateCancelAbility);
}

void UGmAbilitySystemComponent::AddDynamicTagGameplayEffect(const FGameplayTag& Tag)
{
	// const TSubclassOf DynamicTagGE{UGmAssetManager::GetSubclass(UGmGameData::Get().DynamicTagGameplayEffect)};
	// if (!DynamicTagGE)
	// {
	// 	UE_LOG(LogGmUCFAbilitySystem, Warning,
	// 		L"AddDynamicTagGameplayEffect: Unable to find DynamicTagGameplayEffect [%s].",
	// 		*UGmGameData::Get().DynamicTagGameplayEffect.GetAssetName());
	// 	return;
	// }
	//
	// const FGameplayEffectSpecHandle SpecHandle{MakeOutgoingSpec(DynamicTagGE, 1.0f, MakeEffectContext())};
	// FGameplayEffectSpec* Spec{SpecHandle.Data.Get()};
	//
	// if (!Spec)
	// {
	// 	UE_LOG(LogGmUCFAbilitySystem, Warning, L"AddDynamicTagGameplayEffect: Unable to make outgoing spec for [%s].",
	// 		*GetNameSafe(DynamicTagGE));
	// 	return;
	// }
	//
	// Spec->DynamicGrantedTags.AddTag(Tag);
	//
	// ApplyGameplayEffectSpecToSelf(*Spec);
}

void UGmAbilitySystemComponent::RemoveDynamicTagGameplayEffect(const FGameplayTag& Tag)
{
	// const TSubclassOf DynamicTagGE{UGmAssetManager::GetSubclass(UGmGameData::Get().DynamicTagGameplayEffect)};
	// if (!DynamicTagGE)
	// {
	// 	UE_LOG(LogGmUCFAbilitySystem, Warning, L"RemoveDynamicTagGameplayEffect: Unable to find gameplay effect [%s].",
	// 		*UGmGameData::Get().DynamicTagGameplayEffect.GetAssetName());
	// 	return;
	// }
	//
	// FGameplayEffectQuery Query{FGameplayEffectQuery::MakeQuery_MatchAnyOwningTags(FGameplayTagContainer(Tag))};
	// Query.EffectDefinition = DynamicTagGE;
	//
	// RemoveActiveEffects(Query);
}

void UGmAbilitySystemComponent::GetAbilityTargetData(const FGameplayAbilitySpecHandle AbilityHandle,
	const FGameplayAbilityActivationInfo& ActivationInfo, FGameplayAbilityTargetDataHandle& OutTargetDataHandle) const
{
	if (const TSharedPtr ReplicatedData{AbilityTargetDataMap.Find(FGameplayAbilitySpecHandleAndPredictionKey(
		AbilityHandle, ActivationInfo.GetActivationPredictionKey()))}; ReplicatedData.IsValid())
	{
		OutTargetDataHandle = ReplicatedData->TargetData;
	}
}

void UGmAbilitySystemComponent::SetTagRelationshipMapping(UGmAbilityTagRelationshipMapping* NewMapping)
{
	TagRelationshipMapping = NewMapping;
}

void UGmAbilitySystemComponent::GetAdditionalActivationTagRequirements(const FGameplayTagContainer& AbilityTags,
	FGameplayTagContainer& OutActivationRequired, FGameplayTagContainer& OutActivationBlocked) const
{
	if (TagRelationshipMapping)
	{
		TagRelationshipMapping->GetRequiredAndBlockedActivationTags(AbilityTags, &OutActivationRequired, &OutActivationBlocked);
	}
}

void UGmAbilitySystemComponent::TryActivateAbilitiesOnSpawn()
{
	ABILITYLIST_SCOPE_LOCK();
	for (const FGameplayAbilitySpec& AbilitySpec : ActivatableAbilities.Items)
	{
		if (const UGmGameplayAbility* GmUcfAbilityCDO{Cast<UGmGameplayAbility>(AbilitySpec.Ability)})
		{
			GmUcfAbilityCDO->TryActivateAbilityOnSpawn(AbilityActorInfo.Get(), AbilitySpec);
		}
	}
}

void UGmAbilitySystemComponent::AbilitySpecInputPressed(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputPressed(Spec);

	// We don't support UGameplayAbility::bReplicateInputDirectly.
	// Use replicated events instead so that the WaitInputPress ability task works.
	if (Spec.IsActive())
	{
		// Invoke the InputPressed event. This is not replicated here. If someone is listening, they may replicate the InputPressed event to the server.
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputPressed, Spec.Handle,
			Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UGmAbilitySystemComponent::AbilitySpecInputReleased(FGameplayAbilitySpec& Spec)
{
	Super::AbilitySpecInputReleased(Spec);

	// We don't support UGameplayAbility::bReplicateInputDirectly.
	// Use replicated events instead so that the WaitInputRelease ability task works.
	if (Spec.IsActive())
	{
		// Invoke the InputReleased event. This is not replicated here. If someone is listening, they may replicate the InputReleased event to the server.
		InvokeReplicatedEvent(EAbilityGenericReplicatedEvent::InputReleased, Spec.Handle,
			Spec.ActivationInfo.GetActivationPredictionKey());
	}
}

void UGmAbilitySystemComponent::NotifyAbilityActivated(const FGameplayAbilitySpecHandle Handle,
	UGameplayAbility* Ability)
{
	Super::NotifyAbilityActivated(Handle, Ability);

	if (UGmGameplayAbility* GmUcfAbility{Cast<UGmGameplayAbility>(Ability)})
	{
		AddAbilityToActivationGroup(GmUcfAbility->GetActivationGroup(), GmUcfAbility);
	}
}

void UGmAbilitySystemComponent::NotifyAbilityFailed(const FGameplayAbilitySpecHandle Handle,
	UGameplayAbility* Ability, const FGameplayTagContainer& FailureReason)
{
	Super::NotifyAbilityFailed(Handle, Ability, FailureReason);
	
	if (const APawn* Avatar{Cast<APawn>(GetAvatarActor())})
	{
		if (!Avatar->IsLocallyControlled() && Ability->IsSupportedForNetworking())
		{
			ClientNotifyAbilityFailed(Ability, FailureReason);
			return;
		}
	}

	HandleAbilityFailed(Ability, FailureReason);
}

void UGmAbilitySystemComponent::NotifyAbilityEnded(const FGameplayAbilitySpecHandle Handle, UGameplayAbility* Ability,
                                                       const bool bWasCancelled)
{
	Super::NotifyAbilityEnded(Handle, Ability, bWasCancelled);
	
	if (const UGmGameplayAbility* GmUCFAbility{Cast<UGmGameplayAbility>(Ability)})
	{
		RemoveAbilityFromActivationGroup(GmUCFAbility->GetActivationGroup(), GmUCFAbility);
	}
}

void UGmAbilitySystemComponent::ApplyAbilityBlockAndCancelTags(const FGameplayTagContainer& AbilityTags,
	UGameplayAbility* RequestingAbility, bool bEnableBlockTags, const FGameplayTagContainer& BlockTags,
	bool bExecuteCancelTags, const FGameplayTagContainer& CancelTags)
{
	FGameplayTagContainer ModifiedBlockTags{BlockTags};
	FGameplayTagContainer ModifiedCancelTags{CancelTags};

	if (TagRelationshipMapping)
	{
		// Use the mapping to expand the ability tags into block and cancel tag
		TagRelationshipMapping->GetAbilityTagsToBlockAndCancel(AbilityTags, &ModifiedBlockTags, &ModifiedCancelTags);
	}

	Super::ApplyAbilityBlockAndCancelTags(AbilityTags, RequestingAbility, bEnableBlockTags,
		ModifiedBlockTags, bExecuteCancelTags, ModifiedCancelTags);

	//@TODO: Apply any special logic like blocking input or movement
}

void UGmAbilitySystemComponent::HandleChangeAbilityCanBeCanceled(const FGameplayTagContainer& AbilityTags,
	UGameplayAbility* RequestingAbility, const bool bCanBeCanceled)
{
	Super::HandleChangeAbilityCanBeCanceled(AbilityTags, RequestingAbility, bCanBeCanceled);
	
	//@TODO: Apply any special logic like blocking input or movement
}

void UGmAbilitySystemComponent::ClientNotifyAbilityFailed_Implementation(const UGameplayAbility* Ability,
	const FGameplayTagContainer& FailureReason)
{
	HandleAbilityFailed(Ability, FailureReason);
}

void UGmAbilitySystemComponent::HandleAbilityFailed(const UGameplayAbility* Ability,
	const FGameplayTagContainer& FailureReason)
{
	if (const UGmGameplayAbility* GmUCFAbility{Cast<const UGmGameplayAbility>(Ability)})
	{
		GmUCFAbility->OnAbilityFailedToActivate(FailureReason);
	}	
}
