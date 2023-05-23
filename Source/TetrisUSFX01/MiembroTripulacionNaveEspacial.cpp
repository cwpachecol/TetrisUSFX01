// Fill out your copyright notice in the Description page of Project Settings.


#include "MiembroTripulacionNaveEspacial.h"

// Sets default values
AMiembroTripulacionNaveEspacial::AMiembroTripulacionNaveEspacial()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMiembroTripulacionNaveEspacial::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMiembroTripulacionNaveEspacial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMiembroTripulacionNaveEspacial::ApagarLuces()
{
	UE_LOG(LogTemp, Warning, TEXT("Apagando luces"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, 
		FString::Printf(TEXT("%s taps,taps apagar luces."), *TituloTripulacion()));
}

void AMiembroTripulacionNaveEspacial::LevantarYAsegurar() {
	UE_LOG(LogTemp, Warning, TEXT("Levantando y asegurando"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Manos, tiren hacia afuera y aseguren."), *TituloTripulacion()));

}

void AMiembroTripulacionNaveEspacial::PermisoSalida() {
	UE_LOG(LogTemp, Warning, TEXT("Permiso de salida"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Permiso de salida."), *TituloTripulacion()));
}

void AMiembroTripulacionNaveEspacial::ReunionTripulacion() {
	UE_LOG(LogTemp, Warning, TEXT("Reunion de tripulacion"));
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
		FString::Printf(TEXT("%s Reunion de tripulacion."), *TituloTripulacion()));
}

void AMiembroTripulacionNaveEspacial::Tarea(const TArray<FString>& _Tareas){
	for (const FString& TareaActual : _Tareas)
	{
		Tarea(TareaActual);
		UE_LOG(LogTemp, Warning, TEXT("Tarea: %s"), *TareaActual);
	}
}

void AMiembroTripulacionNaveEspacial::Tarea(const FString& _Tarea)
{
	//Checks which task must be executed 
	if (_Tarea.Equals("lights_out"))
	{
		ApagarLuces();
	}
	else if (_Tarea.Equals("trice_up"))
	{
		LevantarYAsegurar();
	}
	else if (_Tarea.Equals("liberty_call"))
	{
		PermisoSalida();
	}
	else if (_Tarea.Equals("muster"))
	{
		ReunionTripulacion();
	}
	else if (_Tarea.Equals("duty"))
	{
		Deber();
	}
	else
	{
		//In case the passed Task doesn't exist
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Tarea indefinida"));
	}
}