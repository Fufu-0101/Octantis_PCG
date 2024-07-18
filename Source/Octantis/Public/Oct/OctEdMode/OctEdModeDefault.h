// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdMode.h"
#include "Tools/UEdMode.h"
// #include "OctEdModeDefault.generated.h"

/**
 * 
 */

class OCTANTIS_API FOctEdModeDefault : public FEdMode
{
	// GENERATED_BODY()
public:
	const static FEditorModeID EM_OctEdModeId;
	FOctEdModeDefault();
	virtual ~FOctEdModeDefault() override;

	
	/** UEdMode interface */
	virtual void Enter() override;
	virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	// virtual TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> GetModeCommands() const override;

};
