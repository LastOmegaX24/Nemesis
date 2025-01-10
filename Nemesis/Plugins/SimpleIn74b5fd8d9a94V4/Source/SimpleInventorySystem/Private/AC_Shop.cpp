// Copyright 2024,  Mecanes . All Rights Reserved.


#include "AC_Shop.h"

// Sets default values for this component's properties
UAC_Shop::UAC_Shop()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_Shop::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

// Called every frame
void UAC_Shop::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	
}


bool UAC_Shop::AddItemToShop(FS_ShopItem Item)
{
	ItemsShop.Add(Item);
	return true;
}

bool UAC_Shop::RemoveItemFromShop(FS_ShopItem Item)
{
	for (FS_ShopItem It : ItemsShop)
	{

		if (It.Item.Name.Equals(Item.Item.Name))
		{
			ItemsShop.Remove(It);
			return true;
			break;
		}
	}
	

	return false;
}

bool UAC_Shop::RemoveItemFromShopByIndex(int32 Index)
{
	if (ItemsShop.IsValidIndex(Index))
	{
		ItemsShop.RemoveAt(Index);
		return true;
	}
	return false;
}
