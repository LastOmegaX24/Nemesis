// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "S_ShopItem.h"
#include "AC_Shop.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLEINVENTORYSYSTEM_API UAC_Shop : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_Shop();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category="Inventory System | Shop")
	bool AddItemToShop(FS_ShopItem Item);

	UFUNCTION(BlueprintCallable, Category="Inventory System | Shop")
	bool RemoveItemFromShop(FS_ShopItem Item);

	UFUNCTION(BlueprintCallable, Category="Inventory System | Shop")
	bool RemoveItemFromShopByIndex(int32 Index);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory System | Shop")
	FString Name;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory System | Shop")
	TArray<FS_ShopItem>  ItemsShop;	
};
