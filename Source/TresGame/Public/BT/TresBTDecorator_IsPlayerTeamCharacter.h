// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresGame.h"
#include "TresBTDecorator_IsPlayerTeamCharacter.generated.h"

/**
 * 
 */
UCLASS()
class TRESGAME_API UTresBTDecorator_IsPlayerTeamCharacter : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsPlayerTeamCharacter")
	FBlackboardKeySelector m_Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresBTDecorator_IsPlayerTeamCharacter")
	TArray<ETresChrUniqueID> m_CharactorUID;
};
