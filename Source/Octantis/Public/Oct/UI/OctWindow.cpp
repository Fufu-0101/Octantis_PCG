// Fill out your copyright notice in the Description page of Project Settings.


#include "Oct/UI/OctWindow.h"

#include "EditorModeManager.h"
#include "OctToolBox.h"
#include "SlateOptMacros.h"
#include "Oct/OctantisApp.h"
#include "Oct/OctEdMode/OctEdModeDefault.h"
#include "Oct/Utils/OctUtils.h"


BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SOctWindow::Construct(const FArguments& InArgs)
{
	ToolsScanPath = MakeShareable(new FString(FPaths::ConvertRelativePathToFull(FPaths::ProjectPluginsDir() + "Octantis/Resources/OctTools/")));

	InitCMDTools();
	InitHIPTools();
	InitHDATools();
	
	
	InitCurrentTools();
	
	
	
	ToolType.Empty();
	ToolType.Add(MakeShareable(new OctToolTypeEnum(ALL_DIS)));
	ToolType.Add(MakeShareable(new OctToolTypeEnum(HDA_DIS)));
	ToolType.Add(MakeShareable(new OctToolTypeEnum(CMD_DIS)));
	ToolType.Add(MakeShareable(new OctToolTypeEnum(HIP_DIS)));
	
	ChildSlot
	[
		SNew(SBorder)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(10)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SBorder)
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(0)
				.BorderBackgroundColor(FSlateColor(FColor(36, 36, 36)))
				.ForegroundColor(FSlateColor(FColor(36, 36, 36)))
				[
					SNew(SListView<TSharedPtr<OctToolTypeEnum>>)
					.ItemHeight(100)
					.ListItemsSource(&ToolType)
					.OnGenerateRow_Lambda([this](TSharedPtr<OctToolTypeEnum> InItemEnum,const TSharedRef< class STableViewBase>& Owner)
					{
						FString InItem;
						bool res=OctToolTypeEnumToString(InItemEnum,InItem);
						if(!res)
						{
							return SNew(STableRow<TSharedPtr<FString>>,Owner);
						}
						return SNew(STableRow<TSharedPtr<FString>>,Owner)
							[
								SNew(SBox)
								.Padding(0)
								.MinDesiredHeight(100)
								.MaxDesiredHeight(100)
								.MinDesiredWidth(100)
								.MaxDesiredWidth(100)
								[
									SNew(SButton)
									.HAlign(HAlign_Center)
									.VAlign(VAlign_Center)
									.Text(FText::FromString(InItem))
									.OnClicked_Lambda([this,InItemEnum]()
									{
										if(*InItemEnum.Get()==OctToolTypeEnum::HDA_DIS)
										{
											CurrentDisplayType=OctToolTypeEnum::HDA_DIS;
										}
										else if (*InItemEnum.Get()==OctToolTypeEnum::CMD_DIS)
										{
											CurrentDisplayType=OctToolTypeEnum::CMD_DIS;
										}
										else if(*InItemEnum.Get()==OctToolTypeEnum::HIP_DIS)
										{
											CurrentDisplayType=OctToolTypeEnum::HIP_DIS;

										}
										else if(*InItemEnum.Get()==OctToolTypeEnum::ALL_DIS)
										{
											CurrentDisplayType=OctToolTypeEnum::ALL_DIS;

										}
										InitCurrentTools();
										if(ToolsListView.IsValid())
										{
											ToolsListView->RequestListRefresh();	
										}
										return  FReply::Handled();
									})
								]
								
							];
					})
				]
				
			]
			+SHorizontalBox::Slot()
			.Padding(10)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.FillWidth(4)
			[

				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.AutoHeight()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.Padding(10,10,10,2)
				[
					SNew(SBox)
					.MaxDesiredHeight(20)
					.MinDesiredHeight(20)
					[
						SNew(SBorder)
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						[
							SNew(SEditableText)
						]
					]
					
				]
				+SVerticalBox::Slot()
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				.AutoHeight()
				.Padding(10)
				[
					
					SAssignNew(ToolsListView,SListView<TSharedPtr<FString>>)
					.ItemHeight(100)
					.ListItemsSource(&CurrentTools)
					.OnGenerateRow_Lambda([this](TSharedPtr<FString> InItem,const TSharedRef< class STableViewBase >& Owner)
					{
						return SNew(STableRow<TSharedPtr<FString>>,Owner)
							[
								// SNew(SOctToolBox)
								// .HAlign(HAlign_Center)
								// .VAlign(VAlign_Top)
								// .MinDesiredHeight(100)
								// [
								// 	SNew(SButton)
								// 	.HAlign(HAlign_Fill)
								// 	.VAlign(VAlign_Fill)
								// 	.Text(FText::FromString(*InItem))
								// ]
								SNew(SBox)
								.HAlign(HAlign_Fill)
								.VAlign(VAlign_Fill)
								.MinDesiredHeight(100)
								[
									SNew(SOctToolBox)
									.ToolName(*InItem.Get())
								]
								
							];
					})
					// SNew(SBox)
					// .HAlign(HAlign_Fill)
					// .VAlign(VAlign_Fill)
					// .MinDesiredHeight(50)
					// [
					// 	SNew(SButton)
					// 	.HAlign(HAlign_Fill)
					// 	.VAlign(VAlign_Fill)
					// 	.OnClicked_Lambda([this]()->FReply 
					// 	{
					// 		this->ClickBtn();
					// 		return  FReply::Handled();
					// 	})
					// 	[
					// 		SNew(SBox)
					// 		.HAlign(HAlign_Center)
					// 		.VAlign(VAlign_Center)
					// 		[
					// 			SNew(STextBlock)
					// 			.Text(FText::FromString("InitHip"))	
					// 		]
					// 	]
					// ]
				]
			]
		]
	];
	
}





bool SOctWindow::InitHIPTools()
{
	HIPTools.Empty();
	TArray<FString> HIPToolsFiles;
	FString HIPToolsPath=*ToolsScanPath.Get()+"HIP";
	OctUtils::GetFolderFiles(HIPToolsPath,HIPToolsFiles,".hip");
	for(auto itools:HIPToolsFiles)
	{
		HIPTools.Add(MakeShareable(new FString(itools)));
	}
	
	return true;
}

bool SOctWindow::InitHDATools()
{
	HDATools.Empty();
	TArray<FString> HDAToolsFiles;
	FString HDAToolsPath=*ToolsScanPath.Get()+"HDA";
	OctUtils::GetFolderFiles(HDAToolsPath,HDAToolsFiles,".hda");
	for(auto itools:HDAToolsFiles)
	{
		HDATools.Add(MakeShareable(new FString(itools)));
	}
	return true;
}

bool SOctWindow::InitCMDTools()
{
	CMDTools.Empty();
	TArray<FString> CMDToolsFiles;
	FString CMDToolsPath=*ToolsScanPath.Get()+"CMD";
	OctUtils::GetFolderFiles(CMDToolsPath,CMDToolsFiles,".bat");
	for(auto itools:CMDToolsFiles)
	{
		CMDTools.Add(MakeShareable(new FString(itools)));
	}
	return true;
}

bool SOctWindow::InitCurrentTools()
{
	switch (CurrentDisplayType) {
	case ALL_DIS:
		CurrentTools.Empty();
		CurrentTools.Append(HDATools);
		CurrentTools.Append(HIPTools);
		CurrentTools.Append(CMDTools);
		break;
	case HIP_DIS:
		CurrentTools=HIPTools;
		break;
	case HDA_DIS:
		CurrentTools=HDATools;
		break;
	case CMD_DIS:
		CurrentTools=CMDTools;
		break;
	}
	return true;
}

bool SOctWindow::OctToolTypeEnumToString(TSharedPtr<OctToolTypeEnum> InEnum, FString& OutValue)
{
	switch (*InEnum.Get()) {
	case ALL_DIS:
		OutValue="ALL";
		return true;
	case HIP_DIS:
		OutValue="HIP";
		return true;
	case HDA_DIS:
		OutValue="HDA";
		return true;
	case CMD_DIS:
		OutValue="CMD";
		return true;
	}
	return false;
}

// void SOctWindow::ClickBtn()
// {
// 	
// 	UE_LOG(LogTemp,Log,TEXT("HIPScanPath:%s"),**HIPScanPath.Get());
// 	// GLevelEditorModeTools().ActivateMode(FOctEdModeDefault::EM_OctEdModeId);
// }

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
