#include "pch.h"
#include "framework.h"

#include "PaDConcreteSubPrototype.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcreteSubPrototype::FConcreteSubPrototype() : FConcretePrototype(this)
{
	_OtherAttribute = new FObject();
}

FConcreteSubPrototype::FConcreteSubPrototype(FConcreteSubPrototype* Prototype) : FConcretePrototype(this)
{
	_OtherAttribute = Prototype->_OtherAttribute;
}

FConcreteSubPrototype::~FConcreteSubPrototype()
{
	_OtherAttribute = NullPtr;
}

FPrototype* FConcreteSubPrototype::Clone()
{
	return new FConcreteSubPrototype(this);
}