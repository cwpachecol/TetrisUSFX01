// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueExplosivo.h"

// Sets default values
ABloqueExplosivo::ABloqueExplosivo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueExplosivo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueExplosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueExplosivo::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueMetal"));
}

