#pragma once

#include "PaDTypes.hpp"

#include "PaDConcreteProductA.hpp"
#include "PaDConcreteProductB.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FFactory
		{
			virtual ~FFactory() = 0 { };

			virtual FConcreteProductA * ProduceA() = 0;

			virtual FConcreteProductB * ProduceB() = 0;


		};



	}



}