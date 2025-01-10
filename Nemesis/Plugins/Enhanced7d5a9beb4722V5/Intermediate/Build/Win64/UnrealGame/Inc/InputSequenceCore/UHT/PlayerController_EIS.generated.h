// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController_EIS.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
enum class ETriggerEvent : uint8;
#ifdef INPUTSEQUENCECORE_PlayerController_EIS_generated_h
#error "PlayerController_EIS.generated.h already included, missing '#pragma once' in PlayerController_EIS.h"
#endif
#define INPUTSEQUENCECORE_PlayerController_EIS_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRegisterInputActionEvent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController_EIS(); \
	friend struct Z_Construct_UClass_APlayerController_EIS_Statics; \
public: \
	DECLARE_CLASS(APlayerController_EIS, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputSequenceCore"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_EIS)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController_EIS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerController_EIS(APlayerController_EIS&&); \
	APlayerController_EIS(const APlayerController_EIS&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_EIS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_EIS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController_EIS) \
	NO_API virtual ~APlayerController_EIS();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_8_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INPUTSEQUENCECORE_API UClass* StaticClass<class APlayerController_EIS>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_EnhancedInputSequence_Source_InputSequenceCore_Public_PlayerController_EIS_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
