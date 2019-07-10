#include "pch.h"
#include "framework.h"

#include "PaDConcreteResource.hpp"

using namespace PaD;
using namespace PaD::Creational;
using namespace PaD::Types;

FInitializer* FConcreteResource::_Initializer = new FInitializer(FConcreteResource::_Initialze, FConcreteResource::_Terminate);

FConcreteResource::FConcreteResource() : FResource()
{

}

FConcreteResource::~FConcreteResource()
{

}

FVoid FConcreteResource::Save()
{

}

FVoid FConcreteResource::Load()
{

}

FBoolean FConcreteResource::_Initialze()
{
	return True;
}

FBoolean FConcreteResource::_Terminate()
{
	return True;
}