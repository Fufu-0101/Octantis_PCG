// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OctNodeBase.h"

/**
 * 
 */
class OCTANTIS_API OctEdCurveNode :public UOctNodeBase
{
public:
	OctEdCurveNode();
	~OctEdCurveNode();
};

class OCTANTIS_API OctEdMaskNode:public UOctNodeBase
{
public:
	OctEdMaskNode();
	~OctEdMaskNode();
};