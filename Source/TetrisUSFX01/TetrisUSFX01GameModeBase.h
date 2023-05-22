// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Block.h"
#include "Piece.h"
#include "AdaptadorMovimientoAleatorio_CA.h"
#include "TetrisUSFX01GameModeBase.generated.h"

DECLARE_DELEGATE(FStandardDelegateSignature)
UCLASS()
class TETRISUSFX01_API ATetrisUSFX01GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	FStandardDelegateSignature MyStandardDelegate;

protected:
	virtual void BeginPlay() override;

public:
	ATetrisUSFX01GameModeBase();


	UPROPERTY()
		APiece* SpawnedPiece;

	UPROPERTY()
		ABlock* SpawnedBlock1;
		
	ABlock* SpawnedBlock2;

	UAdaptadorMovimientoAleatorio_CA* AdaptadorMovimientoAleatorio1;
	UAdaptadorMovimientoAleatorio_CA* AdaptadorMovimientoAleatorio2;

	UFUNCTION()
	void DestroyActorFunction();

	virtual void Tick(float DeltaTime) override;
private:
	float siguientePosicionZ;

};
