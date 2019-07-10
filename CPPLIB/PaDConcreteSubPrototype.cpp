#include "pch.h"
#include "framework.h"

#include "PaDConcreteSubPrototype.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcreteSubPrototype::FConcreteSubPrototype(FConcreteSubPrototype* Prototype) : FConcretePrototype(this)
{
	_OtherAttribute = Prototype->_OtherAttribute;
}

FConcreteSubPrototype::~FConcreteSubPrototype()
{

}

FPrototype* FConcreteSubPrototype::Clone()
{
	return new FConcreteSubPrototype(this);
}