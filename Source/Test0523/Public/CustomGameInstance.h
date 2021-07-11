// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LoadUserWidget.h"
#include "Runtime/MoviePlayer/Public/MoviePlayer.h"
#include "Runtime/Core/Public/Containers/Map.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class TEST0523_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;

	UFUNCTION()
	void PreLoadMap(const FString& map);

	UFUNCTION()
	void PostLoadMap(UWorld* world);
	UPROPERTY()
	ULoadUserWidget* m_loadWidget;

	
};
