#pragma once
#include "ToolBase.h"
#include "Oct/UI/OctHdaToolWindow.h"

#include "HdaTool.generated.h"


UCLASS()
class OCTANTIS_API UHdaTool: public UToolBase
{
	GENERATED_BODY()

public:
	UHdaTool();
	UHdaTool(FString InToolName);
	~UHdaTool(){};
	
public:
	TSharedPtr<SOctHdaToolWindow> ToolWindow;
public:
	bool virtual Init() override;

	
};
