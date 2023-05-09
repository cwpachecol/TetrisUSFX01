// Fill out your copyright notice in the Description page of Project Settings.


#include "Cazador.h"

// Sets default values
ACazador::ACazador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACazador::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACazador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACazador::SetHonda(AActor* ObjHonda)
{
	//Cast the passed Actor and set the Weapon
	Honda = Cast<IHonda>(ObjHonda);
	if (!Honda) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Casteo invalido! Revise la salida de log para mas detalles"));
		UE_LOG(LogTemp, Error, TEXT("SetHonda(): El Actor no es una Honda! Esta seguro que el Actor implementa la interface ? "));
	}
}

void ACazador::Disparar()
{
	if (!Honda) {
		UE_LOG(LogTemp, Error, TEXT("Disparar(): Honda es NULL, asegure que este este inicializado.")); 
		return; 
	}
	//Disparar
	Honda->Disparar();
}

