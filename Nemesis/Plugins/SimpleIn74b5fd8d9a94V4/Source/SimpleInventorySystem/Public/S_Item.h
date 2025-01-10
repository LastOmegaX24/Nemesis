// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "E_ObjectType.h"
#include "S_ItemImage.h"
#include "S_Item.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct FS_Item : public FTableRowBase
{

	GENERATED_BODY()

public:
	FS_Item();
	~FS_Item();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	bool isStackable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FS_ItemImage Image;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	EE_ObjectType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Quantity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Limit;

	bool operator==(const FS_Item& Other) const
	{
		return Name.Equals(Other.Name); 
	}
	
};