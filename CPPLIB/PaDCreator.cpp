#include "pch.h"
#include "framework.h"

#include "PaDCreator.hpp"

using namespace PaD::Creational;
using namespace PaD::Types;

FCreator::FCreator() : FObject()
{

}

FCreator::~FCreator()
{

}

FVoid FCreator::Operate()
{
	auto Product = Produce();
	Product->Consume();
}