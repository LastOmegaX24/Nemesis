// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnsetVoip/Public/OnsetVoipDataChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnsetVoipDataChannel() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UChannel();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipDataChannel();
ONSETVOIP_API UClass* Z_Construct_UClass_UOnsetVoipDataChannel_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnsetVoip();
// End Cross Module References

// Begin Class UOnsetVoipDataChannel
void UOnsetVoipDataChannel::StaticRegisterNativesUOnsetVoipDataChannel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOnsetVoipDataChannel);
UClass* Z_Construct_UClass_UOnsetVoipDataChannel_NoRegister()
{
	return UOnsetVoipDataChannel::StaticClass();
}
struct Z_Construct_UClass_UOnsetVoipDataChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom data channel used for transmitting voice data.\n */" },
		{ "IncludePath", "OnsetVoipDataChannel.h" },
		{ "ModuleRelativePath", "Public/OnsetVoipDataChannel.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Custom data channel used for transmitting voice data." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnsetVoipDataChannel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOnsetVoipDataChannel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChannel,
	(UObject* (*)())Z_Construct_UPackage__Script_OnsetVoip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipDataChannel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOnsetVoipDataChannel_Statics::ClassParams = {
	&UOnsetVoipDataChannel::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOnsetVoipDataChannel_Statics::Class_MetaDataParams), Z_Construct_UClass_UOnsetVoipDataChannel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOnsetVoipDataChannel()
{
	if (!Z_Registration_Info_UClass_UOnsetVoipDataChannel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOnsetVoipDataChannel.OuterSingleton, Z_Construct_UClass_UOnsetVoipDataChannel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOnsetVoipDataChannel.OuterSingleton;
}
template<> ONSETVOIP_API UClass* StaticClass<UOnsetVoipDataChannel>()
{
	return UOnsetVoipDataChannel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOnsetVoipDataChannel);
UOnsetVoipDataChannel::~UOnsetVoipDataChannel() {}
// End Class UOnsetVoipDataChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipDataChannel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOnsetVoipDataChannel, UOnsetVoipDataChannel::StaticClass, TEXT("UOnsetVoipDataChannel"), &Z_Registration_Info_UClass_UOnsetVoipDataChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOnsetVoipDataChannel), 3474017179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipDataChannel_h_3738831709(TEXT("/Script/OnsetVoip"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipDataChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipDataChannel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
