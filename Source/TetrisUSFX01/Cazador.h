// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Honda.h"
#include "Cazador.generated.h"

UCLASS()
class TETRISUSFX01_API ACazador : public AActor, public IHonda
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACazador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The Weapon of the Shooter, that must be a SlingShot
	IHonda* Honda;
public:
	void SetHonda(AActor* ObjHonda);
	void Disparar() override;


};
