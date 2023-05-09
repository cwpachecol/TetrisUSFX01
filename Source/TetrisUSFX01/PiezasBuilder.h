// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Pieza.h"
#include "PiezasBuilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UPiezasBuilder : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IPiezasBuilder
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//The pure virtual functions of the LodgingBuilder
	virtual void BuildBloquesExplosivo() = 0;
	virtual void BuildBloquesHielo() = 0;
	virtual void BuildBloquesMadera() = 0;
	virtual void BuildBloquesMetal() = 0;
	virtual void BuildBloquesPiedra() = 0;
	virtual class APieza* GetPieza() = 0;


};
