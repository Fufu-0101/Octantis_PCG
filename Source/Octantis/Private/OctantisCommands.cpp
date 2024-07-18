// Copyright Epic Games, Inc. All Rights Reserved.

#include "OctantisCommands.h"

#define LOCTEXT_NAMESPACE "FOctantisModule"

void FOctantisCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "Octantis", "Bring up Octantis window", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
