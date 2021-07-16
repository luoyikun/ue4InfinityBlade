// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/MajorCharacter.h"

// Sets default values
AMajorCharacter::AMajorCharacter()
{
	m_camera = CreateDefaultSubobject<UCameraComponent>("CameraComponent");

}

// Called when the game starts or when spawned
void AMajorCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

