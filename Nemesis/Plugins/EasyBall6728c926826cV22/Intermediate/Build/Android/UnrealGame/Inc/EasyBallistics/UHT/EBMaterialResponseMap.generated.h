// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EBMaterialResponseMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EASYBALLISTICS_EBMaterialResponseMap_generated_h
#error "EBMaterialResponseMap.generated.h already included, missing '#pragma once' in EBMaterialResponseMap.h"
#endif
#define EASYBALLISTICS_EBMaterialResponseMap_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEBMaterialResponseMapEntry_Statics; \
	EASYBALLISTICS_API static class UScriptStruct* StaticStruct();


template<> EASYBALLISTICS_API UScriptStruct* StaticStruct<struct FEBMaterialResponseMapEntry>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEBMaterialResponseMap(); \
	friend struct Z_Construct_UClass_UEBMaterialResponseMap_Statics; \
public: \
	DECLARE_CLASS(UEBMaterialResponseMap, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EasyBallistics"), NO_API) \
	DECLARE_SERIALIZER(UEBMaterialResponseMap)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEBMaterialResponseMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEBMaterialResponseMap(UEBMaterialResponseMap&&); \
	UEBMaterialResponseMap(const UEBMaterialResponseMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEBMaterialResponseMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEBMaterialResponseMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEBMaterialResponseMap) \
	NO_API virtual ~UEBMaterialResponseMap();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_39_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_41_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EASYBALLISTICS_API UClass* StaticClass<class UEBMaterialResponseMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EasyBallistics_Source_EasyBallistics_Public_EBMaterialResponseMap_h


#define FOREACH_ENUM_EPENTRACETYPE(op) \
	op(EPenTraceType::PT_BackTrace) \
	op(EPenTraceType::PT_ByComponent) \
	op(EPenTraceType::PT_TwoSidedGeometry) 

enum class EPenTraceType : uint8;
template<> struct TIsUEnumClass<EPenTraceType> { enum { Value = true }; };
template<> EASYBALLISTICS_API UEnum* StaticEnum<EPenTraceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
