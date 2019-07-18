#include "pch.h"
#include "framework.h"

#include "PaDConcreteFactory.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FConcreteFactory::FConcreteFactory() : FObject()
{

}

FConcreteFactory::~FConcreteFactory()
{

}

FConcreteProductA * FConcreteFactory::ProduceA()
{
	auto Product = new FConcreteProductA();
	return Product;
}

FConcreteProductB * FConcreteFactory::ProduceB()
{
	auto Product = new FConcreteProductB();
	return Product;
}