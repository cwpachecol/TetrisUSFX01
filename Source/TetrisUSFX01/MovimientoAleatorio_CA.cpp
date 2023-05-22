// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorio_CA.h"

// Sets default values for this component's properties
UMovimientoAleatorio_CA::UMovimientoAleatorio_CA()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;

    // ...
    RadioMovimiento = 5.0f;
    AnchoMovimiento = 0.0f;
    AltoMovimiento = 15.0f;
    ProfundidadMovimiento = 5.0f;

    TiempoAcumulado = 0.0;
    TiempoLimite = 0.2;
}

// Called when the game starts
void UMovimientoAleatorio_CA::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMovimientoAleatorio_CA::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

    TiempoAcumulado = TiempoAcumulado + DeltaTime;

    if (TiempoAcumulado >= TiempoLimite) {
        TiempoAcumulado = 0.0f;

        AActor* Padre = GetOwner();
        if (Padre)
        {
            // Find a new position for the object to go to 
            auto NuevaPosicion = Padre->GetActorLocation() +
                FVector
                (
                    FMath::FRandRange(-1, 1) * AnchoMovimiento,
                    FMath::FRandRange(-1, 1) * AltoMovimiento,
                    FMath::FRandRange(-1, 1) * ProfundidadMovimiento
                );
            // Update the object's position 
            Padre->SetActorLocation(NuevaPosicion);
        }
    }

    
}

