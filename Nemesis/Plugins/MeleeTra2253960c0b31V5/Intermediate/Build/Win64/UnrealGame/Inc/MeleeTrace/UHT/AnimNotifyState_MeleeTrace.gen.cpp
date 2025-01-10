// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeleeTrace/Public/AnimNotifyState_MeleeTrace.h"
#include "MeleeTrace/Public/MeleeTraceInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MeleeTrace() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
MELEETRACE_API UClass* Z_Construct_UClass_UAnimNotifyState_MeleeTrace();
MELEETRACE_API UClass* Z_Construct_UClass_UAnimNotifyState_MeleeTrace_NoRegister();
MELEETRACE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeTraceInfo();
UPackage* Z_Construct_UPackage__Script_MeleeTrace();
// End Cross Module References

// Begin Class UAnimNotifyState_MeleeTrace
void UAnimNotifyState_MeleeTrace::StaticRegisterNativesUAnimNotifyState_MeleeTrace()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_MeleeTrace);
UClass* Z_Construct_UClass_UAnimNotifyState_MeleeTrace_NoRegister()
{
	return UAnimNotifyState_MeleeTrace::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Melee Trace" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_MeleeTrace.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MeleeTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeTraceInfo_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MeleeTrace.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDrawDebugInEditor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MeleeTrace.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MeleeTrace.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeTraceInfo;
#if WITH_EDITORONLY_DATA
	static void NewProp_bShouldDrawDebugInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDrawDebugInEditor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawDuration;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MeleeTrace>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_MeleeTraceInfo = { "MeleeTraceInfo", nullptr, (EPropertyFlags)0x0010008000000811, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeTrace, MeleeTraceInfo), Z_Construct_UScriptStruct_FMeleeTraceInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeTraceInfo_MetaData), NewProp_MeleeTraceInfo_MetaData) }; // 3124408688
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_bShouldDrawDebugInEditor_SetBit(void* Obj)
{
	((UAnimNotifyState_MeleeTrace*)Obj)->bShouldDrawDebugInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_bShouldDrawDebugInEditor = { "bShouldDrawDebugInEditor", nullptr, (EPropertyFlags)0x0010000800000811, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_MeleeTrace), &Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_bShouldDrawDebugInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldDrawDebugInEditor_MetaData), NewProp_bShouldDrawDebugInEditor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_DebugDrawDuration = { "DebugDrawDuration", nullptr, (EPropertyFlags)0x0010000800000811, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MeleeTrace, DebugDrawDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawDuration_MetaData), NewProp_DebugDrawDuration_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_MeleeTraceInfo,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_bShouldDrawDebugInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::NewProp_DebugDrawDuration,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_MeleeTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::ClassParams = {
	&UAnimNotifyState_MeleeTrace::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::PropPointers),
	0,
	0x009130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_MeleeTrace()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_MeleeTrace.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_MeleeTrace.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_MeleeTrace_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_MeleeTrace.OuterSingleton;
}
template<> MELEETRACE_API UClass* StaticClass<UAnimNotifyState_MeleeTrace>()
{
	return UAnimNotifyState_MeleeTrace::StaticClass();
}
UAnimNotifyState_MeleeTrace::UAnimNotifyState_MeleeTrace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_MeleeTrace);
UAnimNotifyState_MeleeTrace::~UAnimNotifyState_MeleeTrace() {}
// End Class UAnimNotifyState_MeleeTrace

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_AnimNotifyState_MeleeTrace_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_MeleeTrace, UAnimNotifyState_MeleeTrace::StaticClass, TEXT("UAnimNotifyState_MeleeTrace"), &Z_Registration_Info_UClass_UAnimNotifyState_MeleeTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_MeleeTrace), 2921910998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_AnimNotifyState_MeleeTrace_h_3802458256(TEXT("/Script/MeleeTrace"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_AnimNotifyState_MeleeTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_MeleeTrace_Source_MeleeTrace_Public_AnimNotifyState_MeleeTrace_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
