// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GmGameplayAbilitySystem/Public/AbilitySystem/GmAbilitySourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGmAbilitySourceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySourceInterface();
GMGAMEPLAYABILITYSYSTEM_API UClass* Z_Construct_UClass_UGmAbilitySourceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_GmGameplayAbilitySystem();
// End Cross Module References

// Begin Interface UGmAbilitySourceInterface
void UGmAbilitySourceInterface::StaticRegisterNativesUGmAbilitySourceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGmAbilitySourceInterface);
UClass* Z_Construct_UClass_UGmAbilitySourceInterface_NoRegister()
{
	return UGmAbilitySourceInterface::StaticClass();
}
struct Z_Construct_UClass_UGmAbilitySourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AbilitySystem/GmAbilitySourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGmAbilitySourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGmAbilitySourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_GmGameplayAbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGmAbilitySourceInterface_Statics::ClassParams = {
	&UGmAbilitySourceInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGmAbilitySourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGmAbilitySourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGmAbilitySourceInterface()
{
	if (!Z_Registration_Info_UClass_UGmAbilitySourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGmAbilitySourceInterface.OuterSingleton, Z_Construct_UClass_UGmAbilitySourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGmAbilitySourceInterface.OuterSingleton;
}
template<> GMGAMEPLAYABILITYSYSTEM_API UClass* StaticClass<UGmAbilitySourceInterface>()
{
	return UGmAbilitySourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGmAbilitySourceInterface);
UGmAbilitySourceInterface::~UGmAbilitySourceInterface() {}
// End Interface UGmAbilitySourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGmAbilitySourceInterface, UGmAbilitySourceInterface::StaticClass, TEXT("UGmAbilitySourceInterface"), &Z_Registration_Info_UClass_UGmAbilitySourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGmAbilitySourceInterface), 2317704442U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySourceInterface_h_3211652876(TEXT("/Script/GmGameplayAbilitySystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GmGameplayAbilitySystem_Source_GmGameplayAbilitySystem_Public_AbilitySystem_GmAbilitySourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
