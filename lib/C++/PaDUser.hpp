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

	struct FUser : FObject
	{
		FFactory* _Factory;
		FProtocol* _Protocol;
		FImplementation* _Implementation;

		FUser(FFactory*);

		virtual ~FUser();

		virtual FVoid Operate();

		virtual FVoid ChangeProtocol(FProtocol*);

		virtual FVoid ChangeImplementation(FImplementation*);


	};



}