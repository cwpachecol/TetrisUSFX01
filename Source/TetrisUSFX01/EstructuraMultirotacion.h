// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorador.h"
#include "EstructuraMultirotacion.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AEstructuraMultirotacion : public ADecorador
{
	GENERATED_BODY()
public:
	AEstructuraMultirotacion();
	void Rotar() override;
	void SpawnBlocks() override;

	virtual void Tick(float DeltaTime) override;

private:
	float TiempoAcumulado;
};
