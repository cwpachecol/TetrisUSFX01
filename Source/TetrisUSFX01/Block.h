// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

//UCLASS(Abstract)
UCLASS()
class TETRISUSFX01_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//virtual void MostrarInformacion() = 0;
	//void MostrarInformacion() PURE_VIRTUAL(ABlock::MostrarInformacion, );
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BlockMesh;

	UPROPERTY(EditAnywhere)
	TArray<class UMaterial*> Materials;


};
