// Fill out your copyright notice in the Description page of Project Settings.


#include "AdaptadorPistola.h"
#include "Pistola.h"

// Sets default values
AAdaptadorPistola::AAdaptadorPistola()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdaptadorPistola::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAdaptadorPistola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAdaptadorPistola::Disparar()
{
	if (!Arma) {
		UE_LOG(LogTemp, Error, TEXT("Disparar(): Arma es NULL, make sure it's initialized.")); 
		return; 
	}
	//Se llama a la funcion Disparar
	Arma->Fuego();

}

