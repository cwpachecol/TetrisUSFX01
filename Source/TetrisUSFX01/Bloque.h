// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Bloque.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBloque : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IBloque
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void MostrarInformacion() = 0;

	UStaticMeshComponent* BlockMesh;

	TArray<class UMaterial*> Materials;

};
