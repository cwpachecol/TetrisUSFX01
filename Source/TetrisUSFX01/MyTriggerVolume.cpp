// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTriggerVolume.h"
#include "TetrisUSFX01GameModeBase.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyTriggerVolume::AMyTriggerVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TriggerZone = CreateDefaultSubobject<UBoxComponent>("TriggerZone");
	TriggerZone->SetBoxExtent(FVector(200, 200, 100));
}

// Called when the game starts or when spawned
void AMyTriggerVolume::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyTriggerVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyTriggerVolume::NotifyActorBeginOverlap(AActor* OtherActor)
{
    auto Message = FString::Printf(TEXT("%s entered me"), *(OtherActor->GetName()));
    GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);

    // Call our delegate
    UWorld* TheWorld = GetWorld();
    if (TheWorld != nullptr)
    {
        AGameModeBase* GameMode = UGameplayStatics::GetGameMode(TheWorld);
        ATetrisUSFX01GameModeBase* MyGameMode = Cast<ATetrisUSFX01GameModeBase>(GameMode);
        if (MyGameMode != nullptr)
        {
            MyGameMode->MyStandardDelegate.ExecuteIfBound();
        }
    }
}

void AMyTriggerVolume::NotifyActorEndOverlap(AActor* OtherActor)
{
    auto Message = FString::Printf(TEXT("%s left me"), *(OtherActor->GetName()));
    GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, Message);
}
