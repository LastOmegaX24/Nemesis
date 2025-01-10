// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "E_ObjectType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEINVENTORYSYSTEM_E_ObjectType_generated_h
#error "E_ObjectType.generated.h already included, missing '#pragma once' in E_ObjectType.h"
#endif
#define SIMPLEINVENTORYSYSTEM_E_ObjectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleInventorySystem_Source_SimpleInventorySystem_Public_E_ObjectType_h


#define FOREACH_ENUM_EE_OBJECTTYPE(op) \
	op(EE_ObjectType::Object) \
	op(EE_ObjectType::Restaure) \
	op(EE_ObjectType::Shield) \
	op(EE_ObjectType::Weapon) 

enum class EE_ObjectType : uint8;
template<> struct TIsUEnumClass<EE_ObjectType> { enum { Value = true }; };
template<> SIMPLEINVENTORYSYSTEM_API UEnum* StaticEnum<EE_ObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
