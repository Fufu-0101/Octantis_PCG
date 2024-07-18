
#include "HdaTool.h"


UHdaTool::UHdaTool(){ToolType=OCT_HDA_TYPE;}
UHdaTool::UHdaTool(FString InToolName)
{
	ToolName=InToolName;
	ToolType=OCT_HDA_TYPE;
}

bool UHdaTool::Init()
{
	
	return true;
}


