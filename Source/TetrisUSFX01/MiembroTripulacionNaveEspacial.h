// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MiembroTripulacionNaveEspacial.generated.h"

UCLASS()
class TETRISUSFX01_API AMiembroTripulacionNaveEspacial : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMiembroTripulacionNaveEspacial();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ApagarLuces();
	void LevantarYAsegurar();
	void PermisoSalida();
	void ReunionTripulacion();

	void Tarea(const TArray<FString>& _Tareas);

	virtual void Deber() PURE_VIRTUAL(AMiembroTripulacionNaveEspacial::Deber, ;);
	virtual FString TituloTripulacion() PURE_VIRTUAL(AMiembroTripulacionNaveEspacial::TituloTripulacion, return "";);

private:
	//Ejecuta una tarea que se pase como parametro
	void Tarea(const FString& _Tarea);
};
