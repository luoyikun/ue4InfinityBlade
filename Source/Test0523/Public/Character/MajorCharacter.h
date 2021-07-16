// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "MajorCharacter.generated.h"

UCLASS()
class TEST0523_API AMajorCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	//ÉãÏñ»ú×é¼þ
	UPROPERTY(EditAnywhere)
		UCameraComponent* m_camera;
public:
	// Sets default values for this character's properties
	AMajorCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
