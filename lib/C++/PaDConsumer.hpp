#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

#include "PaDFactory.hpp"
#include "PaDProtocol.hpp"
#include "PaDImplementation.hpp"

namespace PaD
{
	using namespace Creational;
	using namespace Structural;

	struct FConsumer : FObject
	{
		FFactory* _Factory;
		FProtocol* _Protocol;
		FImplementation* _Implementation;

		FConsumer(FFactory*);

		virtual ~FConsumer();

		virtual FVoid Operate();

		virtual FVoid ChangeProtocol(FProtocol*);

		virtual FVoid ChangeImplementation(FImplementation*);


	};



}