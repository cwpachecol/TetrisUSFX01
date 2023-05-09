// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Honda.h"
#include "AdaptadorPistola.generated.h"

class APistola;

UCLASS()
class TETRISUSFX01_API AAdaptadorPistola : public AActor, public IHonda
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdaptadorPistola();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Disparar el arma
	void Disparar() override;

private:
	//The Weapon Actor
	UPROPERTY();
	APistola* Arma;

};
