#include "pch.h"
#include "framework.h"

#include "PaDConcreteBuilderC.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcreteBuilderC::FConcreteBuilderC() : FObject()
{
	Reset();
}

FConcreteBuilderC::~FConcreteBuilderC()
{

}

FVoid FConcreteBuilderC::PreformStepA()
{
	_Result->Feature();
}

FVoid FConcreteBuilderC::PreformStepB()
{
	
}

FVoid FConcreteBuilderC::Reset()
{
	_Result = new FConcreteProductC();
}

FConcreteProductC* FConcreteBuilderC::Result()
{
	return _Result;
}