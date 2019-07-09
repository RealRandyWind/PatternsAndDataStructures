#include "pch.h"
#include "framework.h"

#include "PaDConcreteCreatorA.hpp"
#include "PaDConcreteProductA.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcreteCreatorA::FConcreteCreatorA() : FCreator()
{

}

FConcreteCreatorA::~FConcreteCreatorA()
{

}

FProduct * FConcreteCreatorA::Produce()
{
	auto Product = new FConcreteProductA();
	return Product;
}