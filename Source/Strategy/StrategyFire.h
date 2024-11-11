// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IStrategy.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StrategyFire.generated.h"

UCLASS()
class STRATEGY_API AStrategyFire : public AActor, public IIStrategy
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AStrategyFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void CambiarHabilidad() override;

};

