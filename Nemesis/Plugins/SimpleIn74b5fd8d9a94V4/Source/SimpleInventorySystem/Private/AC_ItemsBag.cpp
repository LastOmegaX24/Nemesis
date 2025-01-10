// Copyright 2024,  Mecanes . All Rights Reserved.


#include "AC_ItemsBag.h"
#include "AC_Item.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UAC_ItemsBag::UAC_ItemsBag()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAC_ItemsBag::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UAC_ItemsBag::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ... 
}

void UAC_ItemsBag::AddItem(UAC_Item* AC_Item, bool DestroyActor)
{
	
	bool trouve = false;
	int32 index = 0;

	if (!IsValid(AC_Item))
	{
		return;
	}

	FS_Item item = AC_Item->Item;

	//Est il stockable ??
	if (item.isStackable)
	{
		for (FS_Item It : ItemsBag)
		{

			if (It.Name.Equals(item.Name))
			{
				trouve = true;
				break;
			}
			++index;
		}

		if (trouve)
		{
			SetItem(index, AC_Item, DestroyActor);
		}
		else
		{
			AddNewItem(AC_Item, DestroyActor);
		}

	}
	else
	{
		ItemsBag.Add(item);
		
		if (DestroyActor)
		{
			AC_Item->GetOwner()->Destroy();
		}
	}

}

//Modifie l item
void UAC_ItemsBag::SetItem(int32 index, UAC_Item* AC_Item_var, bool DestroyActor)
{
	int32 reste = 0;

	//SI INDEX N EST PAS VALID OU QUANTITE == LIMIT
	if (!ItemsBag.IsValidIndex(index) || ItemsBag[index].Quantity == ItemsBag[index].Limit)
	{
		return;
	}

	//ItemsBag[index].Is_Storable = AC_Item_var->Item.Is_Storable;
	//ItemsBag[index].image = AC_Item_var->Item.image;
	//ItemsBag[index].image = AC_Item_var->Item.image;
	//ItemsBag[index].name = AC_Item_var->Item.name;
	//ItemsBag[index].description = AC_Item_var->.description;

	int32 quantite = ItemsBag[index].Quantity + AC_Item_var->Item.Quantity;

	if (quantite > ItemsBag[index].Limit)
	{
		reste = quantite - ItemsBag[index].Limit;

		AC_Item_var->Item.Quantity = reste;

	}
	else
	{
		
		if (DestroyActor)
		{
			//UE_LOG(LogTemp, Display, TEXT("VALUE : %d"), item.Quantity);
			//DESTROY ACTOR
			AC_Item_var->GetOwner()->Destroy();
		}
	}

	ItemsBag[index].Quantity = FMath::Clamp<int32>(quantite, 0, ItemsBag[index].Limit);

	//ItemsBag[index].limit = Item.Limit;


}

void UAC_ItemsBag::AddNewItem(UAC_Item* AC_Item_var, bool DestroyActor)
{
	FS_Item item = AC_Item_var->Item;
	int32 Reste = 0;

	if (item.Quantity > item.Limit)
	{
		Reste = item.Quantity - item.Limit;
		item.Quantity = item.Limit;

		AC_Item_var->Item.Quantity = Reste;
	}
	else
	{
		if (DestroyActor)
		{
			//UE_LOG(LogTemp, Display, TEXT("VALUE : %d"), item.Quantity);
			//DESTROY ACTOR
			AC_Item_var->GetOwner()->Destroy();
		}
	}
	
	//UE_LOG(LogTemp, Display, TEXT("VALUE : %d"), item.Quantity);

	ItemsBag.Add(item);
}

//SET ITEM BY INDEX
bool UAC_ItemsBag::SetItemQuantityByIndex(int32 Index, int32 RemoveQuantity)
{

	//SI INDEX N EST PAS VALID OU QUANTITE == LIMIT /  || ItemsBag[Index].Quantity == ItemsBag[Index].Limit
	if (!ItemsBag.IsValidIndex(Index) || RemoveQuantity > ItemsBag[Index].Limit || RemoveQuantity > ItemsBag[Index].Quantity)
	{
		//UE_LOG(LogTemp, Display, TEXT("ERROR 1"));
		return false;
	}

	FS_Item Item = ItemsBag[Index];

	if (ItemsBag[Index].Quantity == 0) {
		ItemsBag.RemoveAt(Index);
		//UE_LOG(LogTemp, Display, TEXT("ERROR 2"));
		return true;
	}

	if (Item.Quantity >= RemoveQuantity)
	{
		ItemsBag[Index].isStackable = Item.isStackable;
		ItemsBag[Index].Image = Item.Image;
		ItemsBag[Index].Name = Item.Name;
		ItemsBag[Index].Description = Item.Description;
		ItemsBag[Index].Limit = Item.Limit;
		ItemsBag[Index].Quantity = (Item.Quantity >= RemoveQuantity) ? FMath::Clamp(Item.Quantity - RemoveQuantity, 0, ItemsBag[Index].Limit) : FMath::Clamp(RemoveQuantity - Item.Quantity, 0, ItemsBag[Index].Limit);
		ItemsBag[Index].Type = Item.Type;

		if (ItemsBag[Index].Quantity == 0) {

			ItemsBag.RemoveAt(Index);
		}
		return true;
	}

	return false;

}

bool UAC_ItemsBag::SetItemQuantity(FS_Item Item, int32 RemoveQuantity)
{
	bool Trouve = false;
	int32 Index = 0;

	for (FS_Item It : ItemsBag)
	{

		if (It.Name.Equals(Item.Name))
		{
			Trouve = true;
			break;
		}
		++Index;
	}

	if (!Trouve)
	{
		return false;
	}

	UE_LOG(LogTemp, Display, TEXT("BINGO"));

	if ( Item.Quantity >= RemoveQuantity )
	{
		UE_LOG(LogTemp, Display, TEXT("Q > RMOVE"));

		ItemsBag[Index].isStackable = Item.isStackable;
		ItemsBag[Index].Image = Item.Image;
		ItemsBag[Index].Name = Item.Name;
		ItemsBag[Index].Description = Item.Description;
		ItemsBag[Index].Limit = Item.Limit;
		ItemsBag[Index].Quantity = (Item.Quantity >= RemoveQuantity) ? FMath::Clamp(Item.Quantity - RemoveQuantity, 0, ItemsBag[Index].Limit) : FMath::Clamp(RemoveQuantity - Item.Quantity, 0, ItemsBag[Index].Limit);
		ItemsBag[Index].Type = Item.Type;

		if (ItemsBag[Index].Quantity == 0) {
			UE_LOG(LogTemp, Display, TEXT("GOOOOO"));
			ItemsBag.RemoveAt(Index);
		}
		return true;
	}

	
	return false;
}

bool UAC_ItemsBag::RemoveItemByIndex(int32 Index)
{
	if (!ItemsBag.IsValidIndex(Index))
	{
		return false;
	}

	ItemsBag.RemoveAt(Index);

	return true;
}

bool UAC_ItemsBag::RemoveItem(FS_Item Item)
{
	bool bTrouve = false;
	int32 Index = 0;

	if (Item.Quantity <= 0)
	{
		return false;
	}

	for (FS_Item It : ItemsBag)
	{

		if (It.Name.Equals(Item.Name))
		{
			bTrouve = true;
			break;
		}
		++Index;
	}

	if (bTrouve)
	{
		RemoveItemByIndex(Index);
		return true;
	}
	else
	{
		return false;
	}
}
