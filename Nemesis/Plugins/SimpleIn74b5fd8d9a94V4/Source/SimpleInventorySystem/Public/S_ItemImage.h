// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "S_ItemImage.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FS_ItemImage
{
	GENERATED_BODY()

public:
	FS_ItemImage();
	~FS_ItemImage();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	UTexture2D* Image_Item;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float Width;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
	float Height;
};
