#include "pch.h"
#include "framework.h"

#include "PaDConcreteProductC.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcreteProductC::FConcreteProductC() : FObject()
{
	_Feature = NullPtr;
}

FConcreteProductC::~FConcreteProductC()
{

}

FVoid FConcreteProductC::Consume()
{
	auto bFeature = (_Feature != NullPtr);

	if(bFeature) { _Feature->Consume(); }
}

FVoid FConcreteProductC::Feature()
{
	_Feature = new FConcreteProductA();
}