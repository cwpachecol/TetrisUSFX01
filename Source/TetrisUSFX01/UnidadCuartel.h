// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Cuartel.h"
#include "UnidadCuartel.generated.h"

UCLASS()
class TETRISUSFX01_API AUnidadCuartel : public ACuartel
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUnidadCuartel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input

	UPROPERTY()
		UParticleSystemComponent* VisualRepresentation;
};
