// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VRBase/AWorldButton/AWorldButton.h"
#include "Components/StaticMeshComponent.h"
#include "SkeeBall.h"
#include "SpawnBallButton.generated.h"

UCLASS()
class DEMOSKEEBALLPROJECT_API ASpawnBallButton : public AWorldButton
{
	GENERATED_BODY()

public:
	ASpawnBallButton();

	int m_iBallIndex;

	void OnPressed_Implementation(ABaseController* pController) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_pSpawnLocationMeshComponent;

};
