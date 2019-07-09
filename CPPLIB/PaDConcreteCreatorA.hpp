#pragma once

#include "PaDTypes.hpp"
#include "PaDCreator.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FConcreteCreatorA : FCreator
		{
			FConcreteCreatorA();

			virtual ~FConcreteCreatorA();

			virtual FProduct* Produce();


		};



	}



}