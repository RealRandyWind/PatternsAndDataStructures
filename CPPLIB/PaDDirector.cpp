#include "pch.h"
#include "framework.h"

#include "PaDDirector.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FDirector::FDirector(FBuilder* Builder) : FObject()
{
	ChangeBuilder(Builder);
}

FDirector::~FDirector()
{

}

FVoid FDirector::ChangeBuilder(FBuilder* Builder)
{
	if (!Builder) { exit(Failure); }
	_Builder = Builder;
}

FVoid FDirector::Produce(EConfiguration Type)
{
	_Builder->Reset();
	if (Type == EConfiguration::Featured)
	{
		_Builder->PreformStepA();
		_Builder->PreformStepB();
	}
	else
	{
		_Builder->PreformStepB();
	}
}