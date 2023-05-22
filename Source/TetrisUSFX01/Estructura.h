// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Block.h"
#include "Estructura.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstructura : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TETRISUSFX01_API IEstructura
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	class USceneComponent* SceneComponent;

	/*virtual void TestRotate() = 0;
	virtual void MoveLeft() = 0;
	virtual void MoveRight() = 0;
	virtual bool MoveDown() = 0;
	virtual void Dismiss() = 0;
	virtual void Rotar() = 0;*/
private:

	/*TArray<ABlock*> Blocks;*/

public:
	/*virtual void SpawnBlocks() = 0;*/
};
