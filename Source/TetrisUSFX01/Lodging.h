// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloorPlan.h"

#include "Lodging.generated.h"

UCLASS()
class TETRISUSFX01_API ALodging : public AActor, public IFloorPlan
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALodging();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Swimming Pool's name
	FString SwimmingPool;
	//The Lobby Area's name
	FString LobbyArea;
	//The Rooms's name
	FString Rooms;
	//The Restaurants's name
	FString Restaurants;

public:
	//Set the name of the Swimming Pool
	void SetSwimmingPool(FString mySwimmingPool);
	//Set the name of the Lobby Area
	void SetLobbyArea(FString myLobbyArea);
	//Set the name of the Rooms
	void SetRooms(FString myRooms);
	//Set the name of the Restaurants
	void SetRestaurants(FString myRestaurants);
	//Logs all the Lodging floors
	void LodgingCharacteristics();


};
