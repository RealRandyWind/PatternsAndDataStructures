#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDConcretePrototype.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FConcreteSubPrototype : FConcretePrototype
		{
			FObject* _OtherAttribute;

			FConcreteSubPrototype(FConcreteSubPrototype*);

			virtual ~FConcreteSubPrototype();

			virtual FPrototype* Clone();


		};



	}



}