// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaEstructura.h"
#include "Bloque.h"
#include "Pieza.generated.h"

enum TiposPieza {
	PIEZA_TODO_METAL,
	PIEZA_TODO_PIEDRA,
	PIEZA_TODO_MADERA,
	PIEZA_TODO_EXPLOSIVO,
	PIEZA_TODO_HIELO,
	PIEZA_METAL_PIEDRA,
	PIEZA_METAL_MADERA,
	PIEZA_METAL_EXPLOSIVO,
	PIEZA_METAL_HIELO,
	PIEZA_PIEDRA_MADERA,
	PIEZA_PIEDRA_EXPLOSIVO
};


UCLASS()
class TETRISUSFX01_API APieza : public AActor, public IPiezaEstructura
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APieza();

	int numeroBloques;
	TiposPieza tipoPieza;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void SetNumeroBloques(int _numeroBloques);
private:
	TArray<IBloque*> Bloques;
};
