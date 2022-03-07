// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGame.h"
#include "TresProjectileSet.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresProjectileSet : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresProjectileSet")
	TArray<struct FTresProjectileAssetUnit> Projectiles;
};
