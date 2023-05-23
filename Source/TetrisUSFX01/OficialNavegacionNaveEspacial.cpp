// Fill out your copyright notice in the Description page of Project Settings.


#include "OficialNavegacionNaveEspacial.h"

AOficialNavegacionNaveEspacial::AOficialNavegacionNaveEspacial()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AOficialNavegacionNaveEspacial::BeginPlay()
{
	Super::BeginPlay();
}

void AOficialNavegacionNaveEspacial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AOficialNavegacionNaveEspacial::Deber()
{
	
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s navega la nave."), *TituloTripulacion()));

}

FString AOficialNavegacionNaveEspacial::TituloTripulacion()
{
	return "El oficial de navegacion";
}
