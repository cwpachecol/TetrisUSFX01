// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PruebaActoresCompuestos.generated.h"

UCLASS()
class TETRISUSFX01_API APruebaActoresCompuestos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APruebaActoresCompuestos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
		USceneComponent* ChildSceneComponent;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BoxOne;
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* BoxTwo;



};
