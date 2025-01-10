// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipNameWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
#ifdef ONSETVOIP_OnsetVoipNameWidgetInterface_generated_h
#error "OnsetVoipNameWidgetInterface.generated.h already included, missing '#pragma once' in OnsetVoipNameWidgetInterface.h"
#endif
#define ONSETVOIP_OnsetVoipNameWidgetInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONSETVOIP_API UOnsetVoipNameWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipNameWidgetInterface(UOnsetVoipNameWidgetInterface&&); \
	UOnsetVoipNameWidgetInterface(const UOnsetVoipNameWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONSETVOIP_API, UOnsetVoipNameWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipNameWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnsetVoipNameWidgetInterface) \
	ONSETVOIP_API virtual ~UOnsetVoipNameWidgetInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOnsetVoipNameWidgetInterface(); \
	friend struct Z_Construct_UClass_UOnsetVoipNameWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipNameWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OnsetVoip"), ONSETVOIP_API) \
	DECLARE_SERIALIZER(UOnsetVoipNameWidgetInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOnsetVoipNameWidgetInterface() {} \
public: \
	typedef UOnsetVoipNameWidgetInterface UClassType; \
	typedef IOnsetVoipNameWidgetInterface ThisClass; \
	static void Execute_SetNameplatePlayerName(UObject* O, const FString& PlayerName); \
	static void Execute_SetNameplateSpeaking(UObject* O, bool bIsSpeaking); \
	static void Execute_SetOwningPlayerState(UObject* O, APlayerState* PlayerState); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipNameWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipNameWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
