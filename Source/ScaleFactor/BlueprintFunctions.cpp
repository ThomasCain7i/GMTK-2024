// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintFunctions.h"

float UBlueprintFunctions::GetMass(UStaticMeshComponent* obj)
{
	return obj->GetMass();
}
