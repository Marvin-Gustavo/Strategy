// Fill out your copyright notice in the Description page of Project Settings.



#include "StrategyInmunity.h"

// Sets default values
AStrategyInmunity::AStrategyInmunity()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategyInmunity::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AStrategyInmunity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AStrategyInmunity::CambiarHabilidad()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green,
		FString::Printf(TEXT("Habilidad: Nada lo detiene")));
}