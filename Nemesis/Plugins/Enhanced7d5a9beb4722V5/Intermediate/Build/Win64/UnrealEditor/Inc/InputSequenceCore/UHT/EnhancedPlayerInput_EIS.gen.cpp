// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputSequenceCore/Public/EnhancedPlayerInput_EIS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnhancedPlayerInput_EIS() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_EIS();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_EIS_NoRegister();
INPUTSEQUENCECORE_API UClass* Z_Construct_UClass_UInputSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_InputSequenceCore();
// End Cross Module References

// Begin Class UEnhancedPlayerInput_EIS
void UEnhancedPlayerInput_EIS::StaticRegisterNativesUEnhancedPlayerInput_EIS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnhancedPlayerInput_EIS);
UClass* Z_Construct_UClass_UEnhancedPlayerInput_EIS_NoRegister()
{
	return UEnhancedPlayerInput_EIS::StaticClass();
}
struct Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EnhancedPlayerInput_EIS.h" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput_EIS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputSequences_MetaData[] = {
		{ "Category", "EIS Enhanced Player Input" },
		{ "ModuleRelativePath", "Public/EnhancedPlayerInput_EIS.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputSequences_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_InputSequences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnhancedPlayerInput_EIS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::NewProp_InputSequences_ElementProp = { "InputSequences", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::NewProp_InputSequences = { "InputSequences", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnhancedPlayerInput_EIS, InputSequences), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputSequences_MetaData), NewProp_InputSequences_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::NewProp_InputSequences_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::NewProp_InputSequences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedPlayerInput,
	(UObject* (*)())Z_Construct_UPackage__Script_InputSequenceCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::ClassParams = {
	&UEnhancedPlayerInput_EIS::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::PropPointers),
	0,
	0x009000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnhancedPlayerInput_EIS()
{
	if (!Z_Registration_Info_UClass_UEnhancedPlayerInput_EIS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnhancedPlayerInput_EIS.OuterSingleton, Z_Construct_UClass_UEnhancedPlayerInput_EIS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnhancedPlayerInput_EIS.OuterSingleton;
}
template<> INPUTSEQUENCECORE_API UClass* StaticClass<UEnhancedPlayerInput_EIS>()
{
	return UEnhancedPlayerInput_EIS::StaticClass();
}
UEnhancedPlayerInput_EIS::UEnhancedPlayerInput_EIS() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnhancedPlayerInput_EIS);
UEnhancedPlayerInput_EIS::~UEnhancedPlayerInput_EIS() {}
// End Class UEnhancedPlayerInput_EIS

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_EnhancedPlayerInput_EIS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnhancedPlayerInput_EIS, UEnhancedPlayerInput_EIS::StaticClass, TEXT("UEnhancedPlayerInput_EIS"), &Z_Registration_Info_UClass_UEnhancedPlayerInput_EIS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnhancedPlayerInput_EIS), 2861587893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_EnhancedPlayerInput_EIS_h_728044452(TEXT("/Script/InputSequenceCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_EnhancedPlayerInput_EIS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_EnhancedPlayerInput_EIS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
