// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "D:\UE\UE_5.3\Engine\Source\Runtime\Slate\Public\Framework\Application\SlateApplication.h"
class FUltiAdditionsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
