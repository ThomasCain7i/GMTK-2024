// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "D:\UE\UE_5.3\Engine\Source\Runtime\Slate\Public\Framework\Application\SlateApplication.h"
#include "FocusActor.generated.h"

UCLASS()
class ULTIADDITIONS_API AFocusActor : public AActor
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	AFocusActor();


protected:

	UFUNCTION(BlueprintCallable, Category = "FocusState")
	bool IsActive();

	UFUNCTION(BlueprintImplementableEvent)
	void OnWindowsLostFocus();

	UFUNCTION(BlueprintImplementableEvent)
	void OnWindowsGainFocus();

	void OnWindowFocusChanged(bool bIsFocused);
};

