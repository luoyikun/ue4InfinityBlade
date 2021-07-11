// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "StartUserWidget.h"
#include "StartGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TEST0523_API AStartGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	UPROPERTY()
		UStartUserWidget* m_startWidget;
public:
	virtual void BeginPlay() override;
};
