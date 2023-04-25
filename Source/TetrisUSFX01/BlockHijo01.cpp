// Fill out your copyright notice in the Description page of Project Settings.


#include "BlockHijo01.h"

ABlockHijo01::ABlockHijo01()
{
	
	UE_LOG(LogTemp, Warning, TEXT("Constructor de ABlockHijo01"));
	MostrarInformacion();
}

void ABlockHijo01::MostrarInformacion()
{
	//UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);
	UE_LOG(LogTemp, Warning, TEXT("Es un: BloqueHijo01"));
}
