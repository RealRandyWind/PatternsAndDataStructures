#include "pch.h"
#include "framework.h"

#include "PaDConsumer.hpp"

using namespace PaD;
using namespace PaD::Creational;
using namespace PaD::Types;

FConsumer::FConsumer(FFactory *Factory) : FObject()
{
	_Factory = Factory;
	_Protocol = NullPtr;
	_Implementation = NullPtr;
}

FConsumer::~FConsumer()
{
	_Factory = NullPtr;
	_Protocol = NullPtr;
	_Implementation = NullPtr;
}

FVoid FConsumer::Operate()
{
	auto ProductA = _Factory->ProduceA();
	auto ProductB = _Factory->ProduceB();
	auto bReady = ProductB->Prepare();

	ProductA->Consume();
	if (bReady) { ProductB->Consume(); }
}

FVoid FConsumer::ChangeProtocol(FProtocol* Protocol)
{
	_Protocol = Protocol;
}

FVoid FConsumer::ChangeImplementation(FImplementation* Implementation)
{
	_Implementation = Implementation;
}