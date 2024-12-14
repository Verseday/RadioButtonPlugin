// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "RadioButtonModuleBPLibrary.generated.h"

UCLASS()
class URadioButtonModuleBPLibrary: public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static TArray<UWidget*> GetAllChildren(UUserWidget* UserWidget);
};
