// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SideWaysHUD.generated.h"

UCLASS()
class ASideWaysHUD : public AHUD
{
	GENERATED_BODY()

public:
	ASideWaysHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

