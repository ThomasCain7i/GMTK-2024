// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintFunctions.generated.h"

/**
 * 
 */
UCLASS()
class SCALEFACTOR_API UBlueprintFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, Category = "ScaleFactor")
	static float GetMass(UStaticMeshComponent* obj);

};
