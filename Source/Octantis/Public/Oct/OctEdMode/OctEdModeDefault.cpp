// Fill out your copyright notice in the Description page of Project Settings.


#include "OctEdModeDefault.h"

#include "EdMode.h"



#define LOCTEXT_NAMESPACE "OctEdModeDefault"

const FEditorModeID FOctEdModeDefault::EM_OctEdModeId=TEXT("EM_OctEdModeDefault");


FOctEdModeDefault::FOctEdModeDefault()
{
	
}
FOctEdModeDefault::~FOctEdModeDefault()
{
	
}

void FOctEdModeDefault::Enter()
{
	FEdMode::Enter();
}

void FOctEdModeDefault::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
	FEdMode::Tick(ViewportClient, DeltaTime);
	UE_LOG(LogTemp,Error,TEXT("Apple"));
}


// TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UOctEdModeDefault::GetModeCommands() const
// {
// 	return FOctEdModeCommands::Get().GetCommands();
// }

#undef LOCTEXT_NAMESPACE
