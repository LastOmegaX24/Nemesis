// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/MeleeTraceEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeTraceEditorSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceEditorSettings();
MELEETRACE_API UClass* Z_Construct_UClass_UMeleeTraceEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin Class UMeleeTraceEditorSettings
void UMeleeTraceEditorSettings::StaticRegisterNativesUMeleeTraceEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeleeTraceEditorSettings);
UClass* Z_Construct_UClass_UMeleeTraceEditorSettings_NoRegister()
{
	return UMeleeTraceEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UMeleeTraceEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MeleeTraceEditorSettings.h" },
		{ "ModuleRelativePath", "Public/MeleeTraceEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDebugDraw_MetaData[] = {
		{ "Category", "Melee Trace Debug" },
		{ "ConsoleVariable", "MeleeTrace.ShouldDrawDebug" },
		{ "ModuleRelativePath", "Public/MeleeTraceEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugDuration_MetaData[] = {
		{ "Category", "Melee Trace Debug" },
		{ "ConsoleVariable", "MeleeTrace.DrawDebugDuration" },
		{ "ModuleRelativePath", "Public/MeleeTraceEditorSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldDebugDraw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDebugDraw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDebugDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeTraceEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::NewProp_bShouldDebugDraw_SetBit(void* Obj)
{
	((UMeleeTraceEditorSettings*)Obj)->bShouldDebugDraw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::NewProp_bShouldDebugDraw = { "bShouldDebugDraw", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMeleeTraceEditorSettings), &Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::NewProp_bShouldDebugDraw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDebugDraw_MetaData), NewProp_bShouldDebugDraw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::NewProp_DrawDebugDuration = { "DrawDebugDuration", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMeleeTraceEditorSettings, DrawDebugDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugDuration_MetaData), NewProp_DrawDebugDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::NewProp_bShouldDebugDraw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::NewProp_DrawDebugDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::ClassParams = {
	&UMeleeTraceEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::PropPointers),
	0,
	0x003000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMeleeTraceEditorSettings()
{
	if (!Z_Registration_Info_UClass_UMeleeTraceEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeleeTraceEditorSettings.OuterSingleton, Z_Construct_UClass_UMeleeTraceEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMeleeTraceEditorSettings.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UMeleeTraceEditorSettings>()
{
	return UMeleeTraceEditorSettings::StaticClass();
}
UMeleeTraceEditorSettings::UMeleeTraceEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeTraceEditorSettings);
UMeleeTraceEditorSettings::~UMeleeTraceEditorSettings() {}
// End Class UMeleeTraceEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMeleeTraceEditorSettings, UMeleeTraceEditorSettings::StaticClass, TEXT("UMeleeTraceEditorSettings"), &Z_Registration_Info_UClass_UMeleeTraceEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeleeTraceEditorSettings), 1259370356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceEditorSettings_h_918868964(TEXT("/Script/MeleeTrace"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_MeleeTraceEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
