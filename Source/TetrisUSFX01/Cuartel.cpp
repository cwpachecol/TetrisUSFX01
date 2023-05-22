// Fill out your copyright notice in the Description page of Project Settings.


#include "Cuartel.h"
#include "Particles/ParticleSystemComponent.h"
#include "UnidadCuartel.h"


// Sets default values
ACuartel::ACuartel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    BuildingMesh = CreateDefaultSubobject<UStaticMeshComponent>("BuildingMesh");
    SpawnPoint = CreateDefaultSubobject<UParticleSystemComponent>("SpawnPoint");
    SpawnInterval = 10;
    auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/Shapes/Shape_Cube.Shape_Cube'")); 
    
    if (MeshAsset.Object != nullptr)
    {
        BuildingMesh->SetStaticMesh(MeshAsset.Object);
    }

    auto ParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("ParticleSystem'/Game/Particles/P_Sparks.P_Sparks'")); 
    if (ParticleSystem.Object != nullptr)
    {
        SpawnPoint->SetTemplate(ParticleSystem.Object);
    }
    SpawnPoint->SetRelativeScale3D(FVector(0.5, 0.5, 0.5));
    UnitToSpawn = AUnidadCuartel::StaticClass();
}

// Called when the game starts or when spawned
void ACuartel::BeginPlay()
{
	Super::BeginPlay();
	
    RootComponent = BuildingMesh;
    SpawnPoint->AttachTo(RootComponent);
    SpawnPoint->SetRelativeLocation(FVector(150, 0, 0));
    GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ACuartel::SpawnUnit, SpawnInterval, true);
}

// Called every frame
void ACuartel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACuartel::SpawnUnit()
{
    FVector SpawnLocation = SpawnPoint->GetComponentLocation();
    GetWorld()->SpawnActor(UnitToSpawn, &SpawnLocation);
}

void ACuartel::EndPlay(const EEndPlayReason::Type
    EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    GetWorld()->GetTimerManager().ClearTimer(SpawnTimerHandle);
}