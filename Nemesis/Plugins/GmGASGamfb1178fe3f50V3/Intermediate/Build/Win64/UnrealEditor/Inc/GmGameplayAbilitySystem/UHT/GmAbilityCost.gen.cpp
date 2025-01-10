// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/AbilityCosts/GmAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmAbilityCost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilityCost();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilityCost_NoRegister();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGmAbilityCost
void UGmAbilityCost::StaticRegisterNativesUGmAbilityCost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGmAbilityCost);
UClass* Z_Construct_UClass_UGmAbilityCost_NoRegister()
{
	return UGmAbilityCost::StaticClass();
}
struct Z_Construct_UClass_UGmAbilityCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGmAbilityCost\n *\n * Base class for costs that a GmUCF_GameplayAbility has (e.g., ammo or charges)\n */" },
		{ "IncludePath", "AbilitySystem/AbilityCosts/GmAbilityCost.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityCosts/GmAbilityCost.h" },
		{ "ToolTip", "UGmAbilityCost\n\nBase class for costs that a GmUCF_GameplayAbility has (e.g., ammo or charges)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
		{ "ModuleRelativePath", "Public/AbilitySystem/AbilityCosts/GmAbilityCost.h" },
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGmAbilityCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGmAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
{
	((UGmAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGmAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGmAbilityCost), &Z_Construct_UClass_UGmAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyCostOnHit_MetaData), NewProp_bOnlyApplyCostOnHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGmAbilityCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGmAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityCost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGmAbilityCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGmAbilityCost_Statics::ClassParams = {
	&UGmAbilityCost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGmAbilityCost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityCost_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilityCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UGmAbilityCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGmAbilityCost()
{
	if (!Z_Registration_Info_UClass_UGmAbilityCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGmAbilityCost.OuterSingleton, Z_Construct_UClass_UGmAbilityCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGmAbilityCost.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGmAbilityCost>()
{
	return UGmAbilityCost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGmAbilityCost);
UGmAbilityCost::~UGmAbilityCost() {}
// End Class UGmAbilityCost

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_AbilityCosts_GmAbilityCost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGmAbilityCost, UGmAbilityCost::StaticClass, TEXT("UGmAbilityCost"), &Z_Registration_Info_UClass_UGmAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGmAbilityCost), 965429700U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_AbilityCosts_GmAbilityCost_h_2374015992(TEXT("/Script/GmGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_AbilityCosts_GmAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_AbilityCosts_GmAbilityCost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
