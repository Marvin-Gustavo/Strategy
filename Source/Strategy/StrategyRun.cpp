// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyRun.h"

// Sets default values
AStrategyRun::AStrategyRun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategyRun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStrategyRun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyRun::CambiarHabilidad()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
		FString::Printf(TEXT("Habilidad: Correr mas rapido")));
}

