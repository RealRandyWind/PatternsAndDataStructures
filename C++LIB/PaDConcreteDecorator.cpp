#include "pch.h"
#include "framework.h"

#include "PaDConcreteDecorator.hpp"

using namespace PaD;
using namespace PaD::Types;
using namespace PaD::Structural;

FConcreteDecorator::FConcreteDecorator(FComponent* Component) : FDecorator(Component)
{
	
}

FConcreteDecorator::~FConcreteDecorator()
{

}

FVoid FConcreteDecorator::Execute()
{
	FDecorator::Execute();
	Extension();
}

FVoid FConcreteDecorator::Extension()
{
	
}