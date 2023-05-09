// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.h"
#include "BloquePiedra.generated.h"

UCLASS()
class TETRISUSFX01_API ABloquePiedra : public AActor, public IBloque
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloquePiedra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void MostrarInformacion();
};
