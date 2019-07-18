#include "pch.h"
#include "framework.h"

#include "PaDBridge.hpp"

using namespace PaD;
using namespace PaD::Types;
using namespace PaD::Structural;

FBridge::FBridge(FImplementation* Implementation) : FObject()
{
	_Implementation = Implementation;
}

FBridge::~FBridge()
{

}

FVoid FBridge::FeatureA()
{
	_Implementation->MethodeC();
	_Implementation->MethodeA();
}

FVoid FBridge::FeatureB()
{
	_Implementation->MethodeB();
}