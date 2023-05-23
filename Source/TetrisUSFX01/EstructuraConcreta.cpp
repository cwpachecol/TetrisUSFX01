// Fill out your copyright notice in the Description page of Project Settings.


#include "EstructuraConcreta.h"
#include "Components/SceneComponent.h"
#include <vector>

// Sets default values
AEstructuraConcreta::AEstructuraConcreta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("Escena Estructura");
	RootComponent = SceneComponent;
    TiempoAcumulado = 0.0;
}

// Called when the game starts or when spawned
void AEstructuraConcreta::BeginPlay()
{
	AActor::BeginPlay();
	SpawnBlocks();
}

// Called every frame
void AEstructuraConcreta::Tick(float DeltaTime)
{
	//AActor::Tick(DeltaTime);
    
    if (TiempoAcumulado >= 0.3)
    {
        UE_LOG(LogTemp, Warning, TEXT("se esta rotando Estructura Concreta"));
        //this->SetActorLocation(this->GetActorLocation() + FVector(0.0, 0.0, -100.0));
        Rotar();
        TiempoAcumulado = 0.0;
    }
    else
    {
        TiempoAcumulado += DeltaTime;
    }
}

void AEstructuraConcreta::Rotar()
{
    
    UE_LOG(LogTemp, Warning, TEXT("rotacion Estructura concreta en el eje Z"));
    FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, -1.0);
    this->SetActorRelativeRotation(NewRotation); 
}

void AEstructuraConcreta::SpawnBlocks()
{
    std::vector<std::vector<std::pair<float, float>>> Shapes =
    {
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},
        {{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},
        {{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},
        {{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
        {{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
        {{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
        {{-20.0, 10.0}, {-10.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},
    };
    const int Index = FMath::RandRange(0, Shapes.size() - 1);
    UE_LOG(LogTemp, Warning, TEXT("numero de pieza(index)=%d"), Index);
    const std::vector<std::pair<float, float>>& YZs = Shapes[Index];
    //const int ColorIndex = FMath::RandRange(0, Colors.Num() - 1);

    for (auto&& YZ : YZs)
    {
        FRotator Rotation(0.0, 0.0, 0.0);
        ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);
        //ABlock* B = nullptr;

        //if (FMath::RandRange(0, 1) == 1) {
        //    ABlockMetallic* BM = GetWorld()->SpawnActor<ABlockMetallic>(this->GetActorLocation(), Rotation);
        //    //const int MaterialBMIndex = FMath::RandRange(0, BM->Materials.Num() - 1);
        //    const int MaterialBMIndex = FMath::RandRange(0, 6);
        //    //BM->BlockMesh->SetMaterial(1, BM->Materials[MaterialBMIndex]);
        //    const int ColorBMIndex = FMath::RandRange(0, Colors.Num() - 1);

        //    BM->BlockMesh->SetMaterial(1, Colors[ColorBMIndex]);       
        //    B = (ABlock*)BM;
        //}
        //else {
        //    ABlockStone* BS = GetWorld()->SpawnActor<ABlockStone>(this->GetActorLocation(), Rotation);
        //    //const int MaterialBSIndex = FMath::RandRange(0, BS->Materials.Num() - 1);
        //    const int MaterialBSIndex = FMath::RandRange(0, 5);

        //    //BS->BlockMesh->SetMaterial(1, BS->Materials[MaterialBSIndex]);
        //    const int ColorBSIndex = FMath::RandRange(0, Colors.Num() - 1);

        //    BS->BlockMesh->SetMaterial(1, Colors[ColorBSIndex]);
        //    B = (ABlock*)BS;
        //}

       /* ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);

        */
        Blocks.Add(B);
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));
    }
}

