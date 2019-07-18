#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDPrototype.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FConcretePrototype : FPrototype, FObject
		{
			FObject* _Attribute;

			FConcretePrototype(FConcretePrototype*);

			virtual ~FConcretePrototype();

			virtual FPrototype* Clone();


		};



	}



}