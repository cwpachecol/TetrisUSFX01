// Fill out your copyright notice in the Description page of Project Settings.


#include "OficialOperacionesNaveEspacial.h"

AOficialOperacionesNaveEspacial::AOficialOperacionesNaveEspacial()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AOficialOperacionesNaveEspacial::BeginPlay()
{
	Super::BeginPlay();
}

void AOficialOperacionesNaveEspacial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AOficialOperacionesNaveEspacial::Deber()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s sintetiza y transmite la informacion."), *TituloTripulacion()));

}

FString AOficialOperacionesNaveEspacial::TituloTripulacion()
{
	return "El oficial de operaciones";
}
