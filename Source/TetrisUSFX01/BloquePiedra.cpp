// Fill out your copyright notice in the Description page of Project Settings.


#include "BloquePiedra.h"

// Sets default values
ABloquePiedra::ABloquePiedra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloquePiedra::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABloquePiedra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloquePiedra::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloquePiedra"));

}

