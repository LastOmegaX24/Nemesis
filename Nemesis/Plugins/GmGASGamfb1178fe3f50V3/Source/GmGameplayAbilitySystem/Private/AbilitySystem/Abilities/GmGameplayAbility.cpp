// Copyright 2024 Dev.GaeMyo. All Rights Reserved.

#include "AbilitySystem/Abilities/GmGameplayAbility.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemGlobals.h"
// #include "AbilitySystemLog.h"
// #include "GmGAS_LogChannels.h"
// #include "AbilitySystem/GmAbilitySimpleFailureMsg.h"
#include "AbilitySystem/GmAbilitySourceInterface.h"
#include "AbilitySystem/GmAbilitySystemComponent.h"
#include "AbilitySystem/GmGameplayEffectContext.h"
#include "AbilitySystem/AbilityCosts/GmAbilityCost.h"
// #include "Camera/GmCameraMode.h"
#include "Core/GmGameplayTags.h"
// #include "GameFramework/GameplayMsgSubsystem.h"
// #include "Physics/PhysicalMaterialWithTags.h"
// #include "Player/GmCharacterExtensionComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"

#define ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(FunctionName, ReturnValue)																				\
{																																						\
	if (!ensure(IsInstantiated()))																														\
	{																																					\
		/*ABILITY_LOG(Error, L"%s: " #FunctionName " cannot be called on a non-instanced ability. Check the instancing policy.", *GetPathName());*/			\
		return ReturnValue;																																\
	}																																					\
}

// UE_DEFINE_GAMEPLAY_TAG(TAG_ABILITY_SIMPLE_FAILURE_MESSAGE, "Ability.UserFacingSimpleActivateFail.Msg");
// UE_DEFINE_GAMEPLAY_TAG(TAG_ABILITY_PLAY_MONTAGE_FAILURE_MESSAGE, "Ability.PlayMontageOnActivateFail.Msg");

UGmGameplayAbility::UGmGameplayAbility(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateNo;
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
	NetSecurityPolicy = EGameplayAbilityNetSecurityPolicy::ClientOrServer;

	ActivationPolicy = EGmAbilityActivationPolicy::OnInputTriggered;
	ActivationGroup = EGmAbilityActivationGroup::Independent;
	
	bLogCancelation = false;
}

UGmAbilitySystemComponent* UGmGameplayAbility::GetGmAbilitySystemComponentFromActorInfo() const
{
	return CurrentActorInfo ? Cast<UGmAbilitySystemComponent>(CurrentActorInfo->AbilitySystemComponent.Get()) : nullptr;
}

AController* UGmGameplayAbility::GetControllerFromActorInfo() const
{
	if (CurrentActorInfo)
	{
		if (AController* PC{CurrentActorInfo->PlayerController.Get()})
		{
			return PC;
		}

		// Look for a player controller or pawn in the owner chain.
		AActor* TestActor{CurrentActorInfo->OwnerActor.Get()};
		while (TestActor)
		{
			if (AController* C{Cast<AController>(TestActor)})
			{
				return C;
			}

			if (const APawn* Pawn{Cast<APawn>(TestActor)})
			{
				return Pawn->GetController();
			}

			TestActor = TestActor->GetOwner();
		}
	}

	return nullptr;
}

// UGmCharacterExtensionComponent* UGmGameplayAbility::GetPlayerPawnComponentFromActorInfo() const
// {
	// return CurrentActorInfo ? UGmCharacterExtensionComponent::TryFindPawnComponent(CurrentActorInfo->AvatarActor.Get()) : nullptr;
// }

void UGmGameplayAbility::TryActivateAbilityOnSpawn(const FGameplayAbilityActorInfo* InActorInfo,
                                                       const FGameplayAbilitySpec& InSpec) const
{
	// Try to activate if activation policy is on spawn.
	if (const bool bIsPredicting{InSpec.ActivationInfo.ActivationMode == EGameplayAbilityActivationMode::Predicting};
		InActorInfo && !InSpec.IsActive() && !bIsPredicting && ActivationPolicy == EGmAbilityActivationPolicy::OnSpawn)
	{
		UAbilitySystemComponent* AbilitySystemComp{InActorInfo->AbilitySystemComponent.Get()};

		// If avatar actor is torn off or about to die, don't try to activate until we get the new one.
		if (const AActor* AvatarActor{InActorInfo->AvatarActor.Get()}; AbilitySystemComp && AvatarActor &&
			!AvatarActor->GetTearOff() && AvatarActor->GetLifeSpan() <= 0.0f)
		{
			if (/*bClientShouldActivate*/InActorInfo->IsLocallyControlled() &&
				/*bIsLocalExecution*/(NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalPredicted ||
					NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalOnly) ||
				/*bServerShouldActivate*/InActorInfo->IsNetAuthority() &&
				/*bIsServerExecution*/(NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerOnly ||
					NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerInitiated))
			{
				AbilitySystemComp->TryActivateAbility(InSpec.Handle);
			}
			// const bool bIsLocalExecution = (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalPredicted) || (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::LocalOnly);
			// const bool bIsServerExecution = (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerOnly) || (NetExecutionPolicy == EGameplayAbilityNetExecutionPolicy::ServerInitiated);
			//
			// const bool bClientShouldActivate = InActorInfo->IsLocallyControlled() && bIsLocalExecution;
			// const bool bServerShouldActivate = InActorInfo->IsNetAuthority() && bIsServerExecution;
			//
			// if (bClientShouldActivate || bServerShouldActivate)
			// {
			// 	AbilitySystemComp->TryActivateAbility(InSpec.Handle);
			// }
		}
	}
}

bool UGmGameplayAbility::CanChangeActivationGroup(const EGmAbilityActivationGroup NewGroup) const
{
	if (!IsInstantiated() || !IsActive())
	{
		return false;
	}

	if (ActivationGroup == NewGroup)
	{
		return true;
	}

	const UGmAbilitySystemComponent* GmASC{GetGmAbilitySystemComponentFromActorInfo()};
	check(GmASC);

	if (ActivationGroup != EGmAbilityActivationGroup::Exclusive_Blocking && GmASC->IsActivationGroupBlocked(NewGroup))
	{
		// This ability can't change groups if it's blocked (unless it is the one doing the blocking).
		return false;
	}

	if (NewGroup == EGmAbilityActivationGroup::Exclusive_Replaceable && !CanBeCanceled())
	{
		// This ability can't become replaceable if it can't be canceled.
		return false;
	}

	return true;
}

bool UGmGameplayAbility::ChangeActivationGroup(EGmAbilityActivationGroup NewGroup)
{
	ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(ChangeActivationGroup, false);

	if (!CanChangeActivationGroup(NewGroup))
	{
		return false;
	}

	if (ActivationGroup != NewGroup)
	{
		UGmAbilitySystemComponent* GmUFCASC{GetGmAbilitySystemComponentFromActorInfo()};
		check(GmUFCASC);

		GmUFCASC->RemoveAbilityFromActivationGroup(ActivationGroup, this);
		GmUFCASC->AddAbilityToActivationGroup(NewGroup, this);

		ActivationGroup = NewGroup;
	}

	return true;
}

// void UGmGameplayAbility::SetCameraMode(const TSubclassOf<UGmCameraMode> CameraMode)
// {
	// ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(SetCameraMode,);

	// if (UGmCharacterExtensionComponent* PlayerPawnComponent{GetPlayerPawnComponentFromActorInfo()})
	// {
		// PlayerPawnComponent->SetAbilityCameraMode(CameraMode, CurrentSpecHandle);
		// ActiveCameraMode = CameraMode;
	// }
// }

// void UGmGameplayAbility::ClearCameraMode()
// {
// 	ENSURE_ABILITY_IS_INSTANTIATED_OR_RETURN(ClearCameraMode,);
//
// 	if (!ActiveCameraMode)
// 	{
// 		return;
// 	}
//
// 	if (UGmCharacterExtensionComponent* PlayerPawnComponent{GetPlayerPawnComponentFromActorInfo()})
// 	{
// 		PlayerPawnComponent->ClearAbilityCameraMode(CurrentSpecHandle);
// 	}
// 	ActiveCameraMode = nullptr;
// }

void UGmGameplayAbility::NativeOnAbilityFailedToActivate(const FGameplayTagContainer& FailedReason) const
{
	// bool bSimpleFailureFound{false};
	// for (FGameplayTag Reason : FailedReason)
	// {
	// 	if (!bSimpleFailureFound)
	// 	{
	// 		if (const FText* pUserFacingMessage{FailureTagToUserFacingMessages.Find(Reason)})
	// 		{
	// 			FGmAbilitySimpleFailureMsg Message;
	// 			Message.PlayerController = GetActorInfo().PlayerController.Get();
	// 			Message.FailureTags = FailedReason;
	// 			Message.UserFacingReason = *pUserFacingMessage;
	//
	// 			UGameplayMsgSubsystem::Get(GetWorld()).BroadcastMessage(TAG_ABILITY_SIMPLE_FAILURE_MESSAGE, Message);
	// 			bSimpleFailureFound = true;
	// 		}
	// 	}
	// 	
	// 	if (UAnimMontage* pMontage{FailureTagToAnimMontage.FindRef(Reason)})
	// 	{
	// 		FGmAbilityMontageFailureMsg Message;
	// 		Message.PlayerController = GetActorInfo().PlayerController.Get();
	// 		Message.FailureTags = FailedReason;
	// 		Message.FailureMontage = pMontage;
	//
	// 		UGameplayMsgSubsystem::Get(GetWorld()).BroadcastMessage(TAG_ABILITY_PLAY_MONTAGE_FAILURE_MESSAGE, Message);
	// 	}
	// }
}

bool UGmGameplayAbility::CanActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags,
                                                const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!ActorInfo || !ActorInfo->AbilitySystemComponent.IsValid())
	{
		return false;
	}

	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	//@TODO Possibly remove after setting up tag relationships
	if (const UGmAbilitySystemComponent* GmUCFASC{CastChecked<UGmAbilitySystemComponent>(
		ActorInfo->AbilitySystemComponent.Get())}; GmUCFASC->IsActivationGroupBlocked(ActivationGroup))
	{
		if (OptionalRelevantTags)
		{
			OptionalRelevantTags->AddTag(GmGameplayTags::Ability_ActivateFail_ActivationGroup);
		}
		return false;
	}

	return true;
}

void UGmGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	// The ability can not block canceling if it's replaceable.
	if (!bCanBeCanceled && ActivationGroup == EGmAbilityActivationGroup::Exclusive_Replaceable)
	{
		// UE_LOG(LogGmUCFAbilitySystem, Error,
			// L"SetCanBeCanceled: Ability [%s] can not block canceling because its activation group is replaceable.",
			// *GetName());
		return;
	}

	Super::SetCanBeCanceled(bCanBeCanceled);
}

void UGmGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	Gb1_OnAbilityAdded();

	TryActivateAbilityOnSpawn(ActorInfo, Spec);
}

void UGmGameplayAbility::OnRemoveAbility(const FGameplayAbilityActorInfo* ActorInfo,
	const FGameplayAbilitySpec& Spec)
{
	Gb1_OnAbilityRemoved();
	
	Super::OnRemoveAbility(ActorInfo, Spec);
}

void UGmGameplayAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UGmGameplayAbility::EndAbility(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
	const bool bReplicateEndAbility, const bool bWasCancelled)
{
	//@TODO ByDevGaeMyo: With PhysicsMaterial
	// ClearCameraMode();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

bool UGmGameplayAbility::CheckCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!Super::CheckCost(Handle, ActorInfo, OptionalRelevantTags) || !ActorInfo)
	{
		return false;
	}

	// Verify we can afford any additional costs
	for (const TObjectPtr<UGmAbilityCost>& AdditionalCost : AdditionalCosts)
	{
		if (AdditionalCost)
		{
			if (!AdditionalCost->CheckCost(this, Handle, ActorInfo, /*inout*/ OptionalRelevantTags))
			{
				return false;
			}
		}
	}

	return true;
}

void UGmGameplayAbility::ApplyCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);

	check(ActorInfo);

	// Used to determine if the ability actually hit a target (as some costs are only spent on successful attempts)
	auto DetermineIfAbilityHitTarget = [&]()->bool
	{
		if (ActorInfo->IsNetAuthority())
		{
			if (const UGmAbilitySystemComponent* Asc{
				Cast<UGmAbilitySystemComponent>(ActorInfo->AbilitySystemComponent.Get())})
			{
				FGameplayAbilityTargetDataHandle TargetData;
				Asc->GetAbilityTargetData(Handle, ActivationInfo, TargetData);
				for (int32 TargetDataIdx{0}; TargetDataIdx < TargetData.Data.Num(); ++TargetDataIdx)
				{
					if (UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(TargetData, TargetDataIdx))
					{
						return true;
					}
				}
			}
		}

		return false;
	};

	// Pay any additional costs
	bool bAbilityHitTarget{false};
	bool bHasDeterminedIfAbilityHitTarget{false};
	for (const TObjectPtr<UGmAbilityCost>& AdditionalCost : AdditionalCosts)
	{
		if (AdditionalCost)
		{
			if (AdditionalCost->ShouldOnlyApplyCostOnHit())
			{
				if (!bHasDeterminedIfAbilityHitTarget)
				{
					bAbilityHitTarget = DetermineIfAbilityHitTarget();
					bHasDeterminedIfAbilityHitTarget = true;
				}

				if (!bAbilityHitTarget)
				{
					continue;
				}
			}

			AdditionalCost->ApplyCost(this, Handle, ActorInfo, ActivationInfo);
		}
	}
}

FGameplayEffectContextHandle UGmGameplayAbility::MakeEffectContext(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo) const
{
	FGameplayEffectContextHandle ContextHandle{Super::MakeEffectContext(Handle, ActorInfo)};
	
	FGmGameplayEffectContext* EffectContext{FGmGameplayEffectContext::ExtractEffectContext(ContextHandle)};
	check(EffectContext);

	check(ActorInfo);

	AActor* EffectCauser{nullptr};
	const IGmAbilitySourceInterface* AbilitySource{nullptr};
	float SourceLevel{0.0f};
	GetAbilitySource(Handle, ActorInfo, /*out*/ SourceLevel, /*out*/ AbilitySource, /*out*/ EffectCauser);

	const UObject* SourceObject{GetSourceObject(Handle, ActorInfo)};

	AActor* Instigator{ActorInfo ? ActorInfo->OwnerActor.Get() : nullptr};

	EffectContext->SetAbilitySource(AbilitySource, SourceLevel);
	EffectContext->AddInstigator(Instigator, EffectCauser);
	EffectContext->AddSourceObject(SourceObject);

	return ContextHandle;
}

void UGmGameplayAbility::ApplyAbilityTagsToGameplayEffectSpec(FGameplayEffectSpec& Spec,
	FGameplayAbilitySpec* AbilitySpec) const
{
	Super::ApplyAbilityTagsToGameplayEffectSpec(Spec, AbilitySpec);

	if (const FHitResult* HitResult{Spec.GetContext().GetHitResult()})
	{
		//@TODO ByDevGaeMyo: With PhysicsMaterial
		// if (const UPhysicalMaterialWithTags* PhysMatWithTags{
			// Cast<const UPhysicalMaterialWithTags>(HitResult->PhysMaterial.Get())})
		// {
			// Spec.CapturedTargetTags.GetSpecTags().AppendTags(PhysMatWithTags->Tags);
		// }
	}
}

bool UGmGameplayAbility::DoesAbilitySatisfyTagRequirements(const UAbilitySystemComponent& AbilitySystemComponent,
	const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags,
	FGameplayTagContainer* OptionalRelevantTags) const
{
		// Specialized version to handle death exclusion and AbilityTags expansion via ASC

	bool bBlocked{false}, bMissing{false};

	const UAbilitySystemGlobals& AbilitySystemGlobals{UAbilitySystemGlobals::Get()};
	const FGameplayTag& BlockedTag{AbilitySystemGlobals.ActivateFailTagsBlockedTag},
	MissingTag{AbilitySystemGlobals.ActivateFailTagsMissingTag};

	// Check if any of this ability's tags are currently blocked
	if (AbilitySystemComponent.AreAbilityTagsBlocked(AbilityTags))
	{
		bBlocked = true;
	}

	const UGmAbilitySystemComponent* GmUcfasc{Cast<UGmAbilitySystemComponent>(&AbilitySystemComponent)};
	static FGameplayTagContainer AllRequiredTags;
	static FGameplayTagContainer AllBlockedTags;

	AllRequiredTags = ActivationRequiredTags;
	AllBlockedTags = ActivationBlockedTags;

	// Expand our ability tags to add additional required/blocked tags
	if (GmUcfasc)
	{
		GmUcfasc->GetAdditionalActivationTagRequirements(AbilityTags, AllRequiredTags, AllBlockedTags);
	}

	// Check to see the required/blocked tags for this ability
	if (AllBlockedTags.Num() || AllRequiredTags.Num())
	{
		static FGameplayTagContainer AbilitySystemComponentTags;
		
		AbilitySystemComponentTags.Reset();
		AbilitySystemComponent.GetOwnedGameplayTags(AbilitySystemComponentTags);

		if (AbilitySystemComponentTags.HasAny(AllBlockedTags))
		{
			if (OptionalRelevantTags && AbilitySystemComponentTags.HasTag(GmGameplayTags::Status_Death))
			{
				// If player is dead and was rejected due to blocking tags, give that feedback
				OptionalRelevantTags->AddTag(GmGameplayTags::Ability_ActivateFail_IsDead);
			}

			bBlocked = true;
		}

		if (!AbilitySystemComponentTags.HasAll(AllRequiredTags))
		{
			bMissing = true;
		}
	}

	if (SourceTags)
	{
		if (SourceBlockedTags.Num() || SourceRequiredTags.Num())
		{
			if (SourceTags->HasAny(SourceBlockedTags))
			{
				bBlocked = true;
			}

			if (!SourceTags->HasAll(SourceRequiredTags))
			{
				bMissing = true;
			}
		}
	}

	if (TargetTags)
	{
		if (TargetBlockedTags.Num() || TargetRequiredTags.Num())
		{
			if (TargetTags->HasAny(TargetBlockedTags))
			{
				bBlocked = true;
			}

			if (!TargetTags->HasAll(TargetRequiredTags))
			{
				bMissing = true;
			}
		}
	}

	if (bBlocked)
	{
		if (OptionalRelevantTags && BlockedTag.IsValid())
		{
			OptionalRelevantTags->AddTag(BlockedTag);
		}
		return false;
	}
	if (bMissing)
	{
		if (OptionalRelevantTags && MissingTag.IsValid())
		{
			OptionalRelevantTags->AddTag(MissingTag);
		}
		return false;
	}

	return true;
}

void UGmGameplayAbility::OnPawnAvatarSet()
{
	Gb1_OnPawnAvatarSet();
}

void UGmGameplayAbility::GetAbilitySource(const FGameplayAbilitySpecHandle InHandle,
                                              const FGameplayAbilityActorInfo* ActorInfo, float& OutSourceLevel,
                                              const IGmAbilitySourceInterface*& OutAbilitySource, AActor*& OutEffectCauser) const
{
	OutSourceLevel = 0.0f;
	OutAbilitySource = nullptr;
	OutEffectCauser = nullptr;

	OutEffectCauser = ActorInfo->AvatarActor.Get();

	// If we were added by something that's an ability info source, use it
	OutAbilitySource = Cast<IGmAbilitySourceInterface>(GetSourceObject(InHandle, ActorInfo));
}
