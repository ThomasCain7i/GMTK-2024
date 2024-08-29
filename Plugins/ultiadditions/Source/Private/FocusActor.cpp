// Fill out your copyright notice in the Description page of Project Settings.


#include "FocusActor.h"

// Sets default values
AFocusActor::AFocusActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called every frame
void AFocusActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFocusActor::BeginPlay()
{
	Super::BeginPlay();

	FSlateApplication::Get().OnApplicationActivationStateChanged().AddUObject(this, &AFocusActor::OnWindowFocusChanged);
}


bool AFocusActor::IsActive()
{
	return FSlateApplication::Get().IsActive();
}

void AFocusActor::OnWindowFocusChanged(const bool bIsFocused)
{
	if (bIsFocused)
	{
		OnWindowsGainFocus();
	}
	else
	{
		OnWindowsLostFocus();
	}
}