// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "E_ObjectType.generated.h"


/**
 *
 */
UENUM(BlueprintType)
enum class EE_ObjectType : uint8
{
	Object UMETA(DisplayName = "Object"),
	Restaure UMETA(DisplayName = "Restaure"),
	Shield UMETA(DisplayName = "Shield"),
	Weapon UMETA(DisplayName = "Weapon"),
};
