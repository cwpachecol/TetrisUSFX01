// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MiembroTripulacionNaveEspacial.h"
#include "OficialOperacionesNaveEspacial.generated.h"

/**
 * 
 */
UCLASS()
class TETRISUSFX01_API AOficialOperacionesNaveEspacial : public AMiembroTripulacionNaveEspacial
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties 
	AOficialOperacionesNaveEspacial();
protected:
	// Called when the game starts or when spawned 
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Interface Duty function - Prints the Duty log
	virtual void Deber() override;
	//Interface Duty function - Returns the title 
	virtual FString TituloTripulacion() override;
};
