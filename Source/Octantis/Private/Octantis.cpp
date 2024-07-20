// Copyright Epic Games, Inc. All Rights Reserved.

#include "Octantis.h"

#include "EditorModeRegistry.h"
#include "OctantisStyle.h"
#include "OctantisCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"

#include "Oct/OctEdMode/OctEdModeDefault.h"
#include "Oct/UI/OctWindow.h"


static const FName OctantisTabName("Octantis");



#define LOCTEXT_NAMESPACE "FOctantisModule"

void FOctantisModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FOctantisStyle::Initialize();
	FOctantisStyle::ReloadTextures();

	FOctantisCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FOctantisCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FOctantisModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FOctantisModule::RegisterMenus));
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(OctantisTabName, FOnSpawnTab::CreateRaw(this, &FOctantisModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FOctantisTabTitle", "Octantis"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	// OctApp= NewObject<UOctantisApp>(GetTransientPackage(),UOctantisApp::StaticClass(),"",RF_NoFlags,nullptr,false,nullptr,nullptr);
	OctApp=NewObject<UOctantisApp>();
	OctApp->AddToRoot();

	
	
	// FOctEdModeCommands::Register();
	// FEditorModeRegistry::Get().RegisterMode<UOctEdModeDefault>(UOctEdModeDefault::EM_OctEdModeId,LOCTEXT("OctEdModeDefault", "OctEdit"),FSlateIcon(),false);
	// FEditorModeRegistry::Get().RegisterMode<>
	// FEditorModeInfo Info={UOctEdModeDefault::EM_OctEdModeId,LOCTEXT("OctEdModeDefault", "OctEdit"),FSlateIcon(),false};
	FEditorModeRegistry::Get().RegisterMode<FOctEdModeDefault>(FOctEdModeDefault::EM_OctEdModeId,LOCTEXT("OctEdModeDefault", "OctEdit"),FSlateIcon(),false);
	
}

void FOctantisModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
	FEditorModeRegistry::Get().UnregisterMode(FOctEdModeDefault::EM_OctEdModeId);
	// FOctEdModeCommands::Unregister();
	OctApp->RemoveFromRoot();

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FOctantisStyle::Shutdown();

	FOctantisCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(OctantisTabName);
}

TSharedRef<SDockTab> FOctantisModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	if(IsValid(OctApp))
	{
		return  SNew(SDockTab)
		.TabRole(ETabRole::NomadTab)
		[
			// OctApp->OctMainWindow.ToSharedRef()
			SNew(SOctWindow)
		];
	}
	return SNew(SDockTab)
		.TabRole(ETabRole::NomadTab);
}

void FOctantisModule::PluginButtonClicked()
{
	FGlobalTabmanager::Get()->TryInvokeTab(OctantisTabName);
}

void FOctantisModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FOctantisCommands::Get().OpenPluginWindow, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FOctantisCommands::Get().OpenPluginWindow));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FOctantisModule, Octantis)
