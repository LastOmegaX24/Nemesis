// Copyright Dev.GaeMyo 2024. All Rights Reserved.

#include "AbilitySystem/GmGameplayEffectContext.h"

#include "AbilitySystem/GmAbilitySourceInterface.h"
#include "Engine/HitResult.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

#if UE_WITH_IRIS
#include "Iris/ReplicationState/PropertyNetSerializerInfoRegistry.h"
#include "Serialization/GameplayEffectContextNetSerializer.h"
#endif

#include UE_INLINE_GENERATED_CPP_BY_NAME(GmGameplayEffectContext)

class FArchive;

FGmGameplayEffectContext* FGmGameplayEffectContext::ExtractEffectContext(struct FGameplayEffectContextHandle Handle)
{
	if (FGameplayEffectContext* BaseEffectContext{Handle.Get()}; BaseEffectContext &&
		BaseEffectContext->GetScriptStruct()->IsChildOf(FGmGameplayEffectContext::StaticStruct()))
	{
		return (FGmGameplayEffectContext*)BaseEffectContext;
	}

	return nullptr;
}

bool FGmGameplayEffectContext::NetSerialize(FArchive& Ar, class UPackageMap* Map, bool& bOutSuccess)
{
	FGameplayEffectContext::NetSerialize(Ar, Map, bOutSuccess);

	// Not serialized for post-activation use:
	// CartridgeID

	return true;
}

#if UE_WITH_IRIS
namespace UE::Net
{
	// Forward to FGameplayEffectContextNetSerializer
	// Note: If FGmGameplayEffectContext::NetSerialize() is modified, a custom NetSerializesr must be implemented as the current fallback will no longer be sufficient.
	UE_NET_IMPLEMENT_FORWARDING_NETSERIALIZER_AND_REGISTRY_DELEGATES(GmGameplayEffectContext, FGameplayEffectContextNetSerializer);
}
#endif

void FGmGameplayEffectContext::SetAbilitySource(const IGmAbilitySourceInterface* InObject, float InSourceLevel)
{
	AbilitySourceObject = MakeWeakObjectPtr(Cast<const UObject>(InObject));
	//SourceLevel = InSourceLevel;
}

const IGmAbilitySourceInterface* FGmGameplayEffectContext::GetAbilitySource() const
{
	return Cast<IGmAbilitySourceInterface>(AbilitySourceObject.Get());
}

const UPhysicalMaterial* FGmGameplayEffectContext::GetPhysicalMaterial() const
{
	if (const FHitResult* HitResultPtr{GetHitResult()})
	{
		return HitResultPtr->PhysMaterial.Get();
	}
	return nullptr;
}
