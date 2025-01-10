// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "S_Item.h"
#include "UObject/Object.h"
#include "S_ShopItem.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FS_ShopItem 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Shop")
	bool IsPurchased = false;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Shop")
	bool OnSale = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Shop")
	float Price = 0.0f;;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Shop")
	float PromoPrice = 0.0f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Shop")
    FString currency = FString("$");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item | Shop")
	FS_Item Item = FS_Item();

	bool operator==(const FS_ShopItem& Other) const
	{
		return Item.Name.Equals(Other.Item.Name); 
	}
	
};
