#include "pch.h"
#include "framework.h"

#include "PaDConsumer.hpp"
#include "PaDConcreteBuilderC.hpp"
#include "PaDConcreteSubPrototype.hpp"

#include "PaDConcreteData.hpp"

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
	_Composite = NullPtr;
	_Decorator = NullPtr;
}

FConsumer::~FConsumer()
{

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

	if (_Protocol)
	{
		auto Data = new FConcreteData();
		auto Buffer = _Protocol->Method(Data);
	}

	if (_Implementation)
	{
		auto Bridge = new FBridge(_Implementation);
		Bridge->FeatureA();
		Bridge->FeatureB();
		delete Bridge;
	}

	if (_Composite) { _Composite->Execute(); }
	
	if (_Decorator) { _Decorator->Execute(); }

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

FVoid FConsumer::ChangeComposite(FComposite* Composite)
{
	_Composite = Composite;
}


FVoid FConsumer::ChangeDecorator(FDecorator* Decorator)
{
	_Decorator = Decorator;
}

FVoid FConsumer::AddComponent(FComponent* Component)
{
	_Composite->Add(Component);
}