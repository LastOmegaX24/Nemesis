// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/MeleeTraceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeTraceSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceSettings();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin Class UMeleeTraceSettings
void UMeleeTraceSettings::StaticRegisterNativesUMeleeTraceSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceSettings);
UClass* Z_Construct_UClass_UMeleeTraceSettings_NoRegister()
{
	return UMeleeTraceSettings::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeleeTraceSettings.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTraceCollisionChannel_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/MeleeTraceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MeleeTraceSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceHitColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/MeleeTraceSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MeleeTraceCollisionChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeleeTraceSettings_Statics::NewProp_MeleeTraceCollisionChannel = { "MeleeTraceCollisionChannel", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceSettings, MeleeTraceCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTraceCollisionChannel_MetaData), NewProp_MeleeTraceCollisionChannel_MetaData) }; // 756624936
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeTraceSettings_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceSettings, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceColor_MetaData), NewProp_TraceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeTraceSettings_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceSettings, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceHitColor_MetaData), NewProp_TraceHitColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeTraceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceSettings_Statics::NewProp_MeleeTraceCollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceSettings_Statics::NewProp_TraceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceSettings_Statics::NewProp_TraceHitColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeTraceSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceSettings_Statics::ClassParams = {
	&UMeleeTraceSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeleeTraceSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceSettings_Statics::PropPointers),
	0,
	0x003000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceSettings()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceSettings.OuterSingleton, Z_Construct_UClass_UMeleeTraceSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceSettings.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceSettings>()
{
	return UMeleeTraceSettings::StaticClass();
}
UMeleeTraceSettings::UMeleeTraceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceSettings);
UMeleeTraceSettings::~UMeleeTraceSettings() {}
// End Class UMeleeTraceSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeTraceSettings, UMeleeTraceSettings::StaticClass, TEXT("UMeleeTraceSettings"), &Z_Registration_Info_UClass_UMeleeTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceSettings), 3941027434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceSettings_h_4165228376(TEXT("/Script/MeleeTrace"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
