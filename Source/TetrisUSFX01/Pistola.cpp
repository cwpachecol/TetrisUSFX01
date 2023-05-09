// Fill out your copyright notice in the Description page of Project Settings.


#include "Pistola.h"

// Sets default values
APistola::APistola()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APistola::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APistola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APistola::Fuego()
{
	//Print Fire log
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Nuestra arma esta disparado"));

}

