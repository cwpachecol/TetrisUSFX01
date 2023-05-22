// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovimientoAleatorio_CA.h"
#include "MovimientoAleatorio.h"
#include "AdaptadorMovimientoAleatorio_CA.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API UAdaptadorMovimientoAleatorio_CA : public UMovimientoAleatorio_CA, public IMovimientoAleatorio
{
	GENERATED_BODY()
	
public:
	UAdaptadorMovimientoAleatorio_CA();
	void SetLimitesMovimiento(float _XMovimiento, float _YMovimiento, float _ZMovimiento);
};
