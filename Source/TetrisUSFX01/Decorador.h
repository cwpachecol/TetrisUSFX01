// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estructura.h"
#include "Decorador.generated.h"

UCLASS()
class TETRISUSFX01_API ADecorador : public AActor, public IEstructura
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/*void Rotar() override;

	void SetEstructura(IEstructura* _Estructura) {
		Estructura = _Estructura;
	};*/

private:
	//IEstructura* Estructura;
};
