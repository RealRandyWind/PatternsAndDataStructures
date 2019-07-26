#include "pch.h"
#include "framework.h"

#include "PaDConcretePrototype.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcretePrototype::FConcretePrototype() : FObject()
{
	_Attribute = new FObject();
}

FConcretePrototype::FConcretePrototype(FConcretePrototype* Prototype) : FObject()
{
	_Attribute = Prototype->_Attribute;
}

FConcretePrototype::~FConcretePrototype()
{
	_Attribute = NullPtr;
}

FPrototype* FConcretePrototype::Clone()
{
	return new FConcretePrototype(this);
}