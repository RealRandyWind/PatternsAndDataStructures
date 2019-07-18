#include "pch.h"
#include "framework.h"

#include "PaDUser.hpp"

using namespace PaD;
using namespace PaD::Creational;
using namespace PaD::Types;

FUser::FUser(FFactory *Factory) : FObject()
{
	_Factory = Factory;
	_Protocol = NullPtr;
	_Implementation = NullPtr;
}

FUser::~FUser()
{
	_Factory = NullPtr;
}

FVoid FUser::Operate()
{
	auto ProductA = _Factory->ProduceA();
	auto ProductB = _Factory->ProduceB();
	auto bReady = ProductB->Prepare();

	ProductA->Consume();
	if (bReady) { ProductB->Consume(); }
}

FVoid FUser::ChangeProtocol(FProtocol* Protocol)
{
	_Protocol = Protocol;
}

FVoid FUser::ChangeImplementation(FImplementation* Implementation)
{
	_Implementation = Implementation;
}