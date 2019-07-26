#include "pch.h"
#include "framework.h"

#include "PaDConsumer.hpp"
#include "PaDConcreteBuilderC.hpp"
#include "PaDConcreteSubPrototype.hpp"

using namespace PaD;
using namespace PaD::Creational;
using namespace PaD::Types;

FConsumer::FConsumer(FFactory *Factory) : FObject()
{
	_Factory = Factory;
	_Protocol = NullPtr;
	_Implementation = NullPtr;
	_Director = NullPtr;
	_Prototype = NullPtr;
	_Singelton = NullPtr;
}

FConsumer::~FConsumer()
{
	_Factory = NullPtr;
	_Protocol = NullPtr;
	_Implementation = NullPtr;
	_Director = NullPtr;
	_Prototype = NullPtr;
}

FVoid FConsumer::Operate()
{
	if (_Factory)
	{
		auto ProductA = _Factory->ProduceA();
		auto ProductB = _Factory->ProduceB();
		auto bReady = ProductB->Prepare();

		ProductA->Consume();
		if (bReady) { ProductB->Consume(); }
	}

	if (_Prototype) { auto Copy = _Prototype->Clone(); }

	Operate(FDirector::EConfiguration::Featured);
}

FVoid FConsumer::Operate(FDirector::EConfiguration Configuration)
{
	if (_Director)
	{
		_Director->Produce(Configuration);
	}
}

FVoid FConsumer::ChangeProtocol(FProtocol* Protocol)
{
	_Protocol = Protocol;
}

FVoid FConsumer::ChangeImplementation(FImplementation* Implementation)
{
	_Implementation = Implementation;
}

FVoid FConsumer::ChangeDirector(FDirector* Director, FBuilder* Builder)
{
	_Director = Director;
	ChangeBuilder(Builder);
}

FVoid FConsumer::ChangeBuilder(FBuilder* Builder)
{
	if (_Director) {
		if (!Builder)
		{
			Builder = new FConcreteBuilderC();
		}
		_Director->ChangeBuilder(Builder);
	}
}

FVoid FConsumer::ChangePrototype(FPrototype* Prototype)
{
	_Prototype = Prototype;
}

FVoid FConsumer::ChangeSingelton(FSingelton* Singelton)
{
	_Singelton = Singelton;
}