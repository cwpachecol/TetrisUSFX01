// Copyright Epic Games, Inc. All Rights Reserved.


#include "TetrisUSFX01GameModeBase.h"

void ATetrisUSFX01GameModeBase::BeginPlay()
{
    // Call the parent class version of this function
    Super::BeginPlay();
    // Displays a red message on the screen for 10 seconds
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Block"));
    // Spawn an instance of the AMyFirstActor class at the
    //default location.
    FTransform SpawnLocation;
    SpawnedActor = GetWorld()->SpawnActor<ABlock>(ABlock::StaticClass(), SpawnLocation);
    SpawnedActor->SetActorRelativeLocation(FVector(0.0, 0.0, 0.0));

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Spawning un Piece"));
    SpawnedPiece = GetWorld()->SpawnActor<APiece>(APiece::StaticClass(), SpawnLocation);
    SpawnedPiece->SetActorRelativeLocation(FVector(0.0, 100.0, 0.0));
    SpawnedPiece->SpawnBlocks();

}

void ATetrisUSFX01GameModeBase::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
   {
      // Displays a red message on the screen for 10 seconds
      GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Block destruido"));
      SpawnedActor->Destroy();
   }
}
