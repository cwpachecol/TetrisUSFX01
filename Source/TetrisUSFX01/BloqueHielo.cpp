// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"

// Sets default values
ABloqueHielo::ABloqueHielo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueHielo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueHielo::MostrarInformacion()
{
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueHielo"));
}

