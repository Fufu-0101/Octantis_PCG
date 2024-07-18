// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "OctantisStyle.h"

class FOctantisCommands : public TCommands<FOctantisCommands>
{
public:

	FOctantisCommands()
		: TCommands<FOctantisCommands>(TEXT("Octantis"), NSLOCTEXT("Contexts", "Octantis", "Octantis Plugin"), NAME_None, FOctantisStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};