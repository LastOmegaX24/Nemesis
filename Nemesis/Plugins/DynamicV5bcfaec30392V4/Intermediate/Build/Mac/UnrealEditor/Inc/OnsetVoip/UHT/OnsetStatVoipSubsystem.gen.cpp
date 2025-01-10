// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Private/OnsetStatVoipSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetStatVoipSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetStatVoipSubsystem();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetStatVoipSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Class UOnsetStatVoipSubsystem
void UOnsetStatVoipSubsystem::StaticRegisterNativesUOnsetStatVoipSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetStatVoipSubsystem);
UClass* Z_Construct_UClass_UOnsetStatVoipSubsystem_NoRegister()
{
	return UOnsetStatVoipSubsystem::StaticClass();
}
struct Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Used for registering 'stat voip'\n */" },
		{ "IncludePath", "OnsetStatVoipSubsystem.h" },
		{ "ModuleRelativePath", "Private/OnsetStatVoipSubsystem.h" },
		{ "ToolTip", "Used for registering 'stat voip'" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetStatVoipSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics::ClassParams = {
	&UOnsetStatVoipSubsystem::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetStatVoipSubsystem()
{
	if (!Z_Registration_Info_UClass_UOnsetStatVoipSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetStatVoipSubsystem.OuterSingleton, Z_Construct_UClass_UOnsetStatVoipSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetStatVoipSubsystem.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetStatVoipSubsystem>()
{
	return UOnsetStatVoipSubsystem::StaticClass();
}
UOnsetStatVoipSubsystem::UOnsetStatVoipSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetStatVoipSubsystem);
UOnsetStatVoipSubsystem::~UOnsetStatVoipSubsystem() {}
// End Class UOnsetStatVoipSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Private_OnsetStatVoipSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetStatVoipSubsystem, UOnsetStatVoipSubsystem::StaticClass, TEXT("UOnsetStatVoipSubsystem"), &Z_Registration_Info_UClass_UOnsetStatVoipSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetStatVoipSubsystem), 3591385897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Private_OnsetStatVoipSubsystem_h_3129037544(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Private_OnsetStatVoipSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Private_OnsetStatVoipSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
