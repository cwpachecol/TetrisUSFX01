// Fill out your copyright notice in the Description page of Project Settings.


#include "EstructuraMultirotacion.h"
#include "Block.h"

AEstructuraMultirotacion::AEstructuraMultirotacion()
{
	TiempoAcumulado = 0.0;
}

void AEstructuraMultirotacion::Rotar()
{
	//Super::Rotar();
    UE_LOG(LogTemp, Warning, TEXT("now can rotate Estructura multirotacional"));
    FRotator NewRotation = this->GetActorRotation() + FRotator(-1.0, 0.0, 0.0);
    this->SetActorRelativeRotation(NewRotation);

}

void AEstructuraMultirotacion::SpawnBlocks()
{
	//Super::SpawnBlocks();
}

void AEstructuraMultirotacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (TiempoAcumulado >= 0.5)
	{
		UE_LOG(LogTemp, Warning, TEXT("now can move Estructura concreta"));
		//this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
		Rotar();
		TiempoAcumulado = 0.0;
	}
	else
	{
		TiempoAcumulado += DeltaTime;
	}
}
