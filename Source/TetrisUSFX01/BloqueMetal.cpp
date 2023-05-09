// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMetal.h"

// Sets default values
ABloqueMetal::ABloqueMetal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueMetal::BeginPlay()
{
	Super::BeginPlay();
	}

// Called every frame
void ABloqueMetal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueMetal::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueMetal"));
}

