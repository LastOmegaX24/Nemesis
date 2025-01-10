// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "S_Item.h"
#include "AC_ItemsBag.generated.h"

class UAC_Item;

UCLASS(Blueprintable, BlueprintType, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SIMPLEINVENTORYSYSTEM_API UAC_ItemsBag : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_ItemsBag();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void AddItem(UAC_Item* Item, bool DestroyActor);

	UFUNCTION()
	void SetItem(int32 index, UAC_Item* AC_Item_var, bool DestroyActor);

	UFUNCTION()
	void AddNewItem(UAC_Item* AC_Item_var, bool DestroyActor);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Modify the quantity of item", DisplayName = "Set Item Quantity By Index", KeyWords = "Set Item By Index"), Category = "Inventory System")
	bool SetItemQuantityByIndex(int32 Index, int32 RemoveQuantity);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Modify the quantity of item", DisplayName = "Set Item Quantity", KeyWords = "Set Item By Index"), Category = "Inventory System")
	bool SetItemQuantity(FS_Item Item, int32 RemoveQuantity);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Return true , if the item have being remove", DisplayName = "Remove Item By Index", KeyWords = "Remove Item By Index"), Category = "Inventory System")
	bool RemoveItemByIndex(int32 Index);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Return true , if the item have being remove", DisplayName = "Remove Item", KeyWords = "Remove Item"), Category = "Inventory System")
	bool RemoveItem(FS_Item Item);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory System")
	FS_ItemImage BagImage;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory System")
	TArray<FS_Item>  ItemsBag;

};
