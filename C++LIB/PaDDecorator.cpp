#include "pch.h"
#include "framework.h"

#include "PaDDecorator.hpp"

using namespace PaD;
using namespace PaD::Types;
using namespace PaD::Structural;

FDecorator::FDecorator(FComponent *Component) : FObject()
{
	_Component = Component;
}

FDecorator::~FDecorator()
{

}

FVoid FDecorator::Execute()
{
	auto bComponent = (_Component != NullPtr);
	if (bComponent) { _Component->Execute(); }
}