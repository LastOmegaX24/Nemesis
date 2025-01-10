// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/GmAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmAbilitySystemGlobals() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySystemGlobals();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySystemGlobals_NoRegister();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin Class UGmAbilitySystemGlobals
void UGmAbilitySystemGlobals::StaticRegisterNativesUGmAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGmAbilitySystemGlobals);
UClass* Z_Construct_UClass_UGmAbilitySystemGlobals_NoRegister()
{
	return UGmAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UGmAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/GmAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGmAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGmAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGmAbilitySystemGlobals_Statics::ClassParams = {
	&UGmAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UGmAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGmAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UGmAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGmAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UGmAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGmAbilitySystemGlobals.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGmAbilitySystemGlobals>()
{
	return UGmAbilitySystemGlobals::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGmAbilitySystemGlobals);
UGmAbilitySystemGlobals::~UGmAbilitySystemGlobals() {}
// End Class UGmAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGmAbilitySystemGlobals, UGmAbilitySystemGlobals::StaticClass, TEXT("UGmAbilitySystemGlobals"), &Z_Registration_Info_UClass_UGmAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGmAbilitySystemGlobals), 821683361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemGlobals_h_2296227498(TEXT("/Script/GmGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
