// Copyright 2024,  Mecanes . All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "S_Item.h"
#include "AC_Item.generated.h"

class AC_ItemsBag;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLEINVENTORYSYSTEM_API UAC_Item : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAC_Item();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add To Bag", ToolTip = "Stores an object in the bag. Returns true if the object is stored, otherwise false if the actor has no bag.", KeyWords = "Inventory System , Add To Bag"), Category = "Inventary System")
	bool AddToBag(AActor* Actor, bool DestroyActor);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "has Space For", ToolTip = "Returns true if there is room, otherwise false ", KeyWords = "Inventary System, has Space For"), Category = "Inventory System")
	bool hasSpaceFor(AActor* Actor);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventary System")
	FS_Item Item;
};
