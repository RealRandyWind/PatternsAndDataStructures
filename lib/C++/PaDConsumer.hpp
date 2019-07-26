#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

#include "PaDFactory.hpp"
#include "PaDProtocol.hpp"
#include "PaDImplementation.hpp"
#include "PaDDirector.hpp"
#include "PaDBuilder.hpp"
#include "PaDPrototype.hpp"
#include "PaDSingelton.hpp"
#include "PaDSingelton.hpp"


namespace PaD
{
	using namespace Creational;
	using namespace Structural;

	struct FConsumer : FObject
	{
		FFactory* _Factory;
		FProtocol* _Protocol;
		FImplementation* _Implementation;
		FDirector* _Director;
		FPrototype* _Prototype;
		FSingelton* _Singelton;

		FConsumer(FFactory* = NullPtr);

		virtual ~FConsumer();

		virtual FVoid Operate();

		virtual FVoid Operate(FDirector::EConfiguration);

		virtual FVoid ChangeProtocol(FProtocol*);

		virtual FVoid ChangeImplementation(FImplementation*);

		virtual FVoid ChangeDirector(FDirector*, FBuilder* = NullPtr);

		virtual FVoid ChangeBuilder(FBuilder*);

		virtual FVoid ChangePrototype(FPrototype*);

		virtual FVoid ChangeSingelton(FSingelton*);


	};



}