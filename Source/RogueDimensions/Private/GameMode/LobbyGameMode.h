﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "LobbyGameMode.generated.h"

UCLASS()
class ROGUEDIMENSIONS_API ALobbyGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALobbyGameMode();

	virtual void PostLogin(APlayerController* NewPlayer) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
