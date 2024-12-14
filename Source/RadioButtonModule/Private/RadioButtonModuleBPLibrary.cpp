// Copyright Epic Games, Inc. All Rights Reserved.

#include "RadioButtonModuleBPLibrary.h"

#include "Blueprint/WidgetTree.h"
#include "RadioButtonModule.h"

TArray<UWidget*>
    URadioButtonModuleBPLibrary::GetAllChildren(UUserWidget* UserWidget) {
	// check UserWidget is not null
	check(UserWidget);

	// get Widget Tree
	const auto& WidgetTree = UserWidget->WidgetTree;

	// check Widget Tree is not null
	check(WidgetTree);

	TArray<UWidget*> Children;

	// get all widgets from Widget Tree
	WidgetTree->GetAllWidgets(Children);

	return Children;
}
