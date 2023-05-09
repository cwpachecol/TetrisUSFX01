// Fill out your copyright notice in the Description page of Project Settings.


#include "Pieza.h"

// Sets default values
APieza::APieza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APieza::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APieza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APieza::SetNumeroBloques(int _numeroBloques)
{
	numeroBloques = _numeroBloques;
}

