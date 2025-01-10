// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetVoipPawnInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UOnsetVoipAudioComponent;
class UOnsetVoipTalker;
#ifdef ONSETVOIP_OnsetVoipPawnInterface_generated_h
#error "OnsetVoipPawnInterface.generated.h already included, missing '#pragma once' in OnsetVoipPawnInterface.h"
#endif
#define ONSETVOIP_OnsetVoipPawnInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONSETVOIP_API UOnsetVoipPawnInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetVoipPawnInterface(UOnsetVoipPawnInterface&&); \
	UOnsetVoipPawnInterface(const UOnsetVoipPawnInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONSETVOIP_API, UOnsetVoipPawnInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetVoipPawnInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnsetVoipPawnInterface) \
	ONSETVOIP_API virtual ~UOnsetVoipPawnInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOnsetVoipPawnInterface(); \
	friend struct Z_Construct_UClass_UOnsetVoipPawnInterface_Statics; \
public: \
	DECLARE_CLASS(UOnsetVoipPawnInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OnsetVoip"), ONSETVOIP_API) \
	DECLARE_SERIALIZER(UOnsetVoipPawnInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOnsetVoipPawnInterface() {} \
public: \
	typedef UOnsetVoipPawnInterface UClassType; \
	typedef IOnsetVoipPawnInterface ThisClass; \
	static void Execute_OnNewPlayerState(UObject* O, APlayerState* PlayerState, UOnsetVoipTalker* OnsetVoipTalker); \
	static void Execute_OnTalkingStateChange(UObject* O, bool bIsTalking, bool bIs2D); \
	static void Execute_OnVoipAudioComponentCreated(UObject* O, UOnsetVoipAudioComponent* VoipAudioComponent); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONSETVOIP_API UClass* StaticClass<class UOnsetVoipPawnInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_OnsetVoip_Source_OnsetVoip_Public_OnsetVoipPawnInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
