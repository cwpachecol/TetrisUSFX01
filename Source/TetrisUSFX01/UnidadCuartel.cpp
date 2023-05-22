// Fill out your copyright notice in the Description page of Project Settings.


#include "UnidadCuartel.h"
#include "Particles/ParticleSystemComponent.h"
//#include "ConstructorHelpers.h"

// Sets default values
AUnidadCuartel::AUnidadCuartel()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//VisualRepresentation = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");
	/*auto ParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Game/Particles/P_Steam_Lit.P_Steam_Lit'"));
	if (ParticleSystem.Object != nullptr)
	{
		SpawnPoint->SetTemplate(ParticleSystem.Object);
	}*/
	//SpawnPoint->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
	//SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

}

// Called when the game starts or when spawned
void AUnidadCuartel::BeginPlay()
{
	Super::BeginPlay();
	
	//SpawnPoint->AttachTo(RootComponent);
}

// Called every frame
void AUnidadCuartel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//SetActorLocation(GetActorLocation() + FVector(10, 0, 0));
}
