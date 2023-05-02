// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LodgingBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class ULodgingBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API ILodgingBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the LodgingBuilder
	virtual void BuildSwimmingPool() = 0;
	virtual void BuildLobbyArea() = 0;
	virtual void BuildRooms() = 0;
	virtual void BuildRestaurants() = 0;
	virtual class ALodging* GetLodging() = 0;



};
