// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorioComponent.h"

// Sets default values for this component's properties
UMovimientoAleatorioComponent::UMovimientoAleatorioComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	RadioMovimiento = 5.0f;
}


// Called when the game starts
void UMovimientoAleatorioComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoAleatorioComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	AActor* Padre = GetOwner();

	if (Padre) {
		auto NuevaPosicion = Padre->GetActorLocation() + 
			FVector(FMath::FRandRange(-1, 1) * RadioMovimiento, 
					FMath::FRandRange(-1, 1) * RadioMovimiento, 
					FMath::FRandRange(-1, 1) * RadioMovimiento);
		Padre->SetActorLocation(NuevaPosicion);
	}
}

