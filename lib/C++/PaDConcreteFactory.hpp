#pragma once

#include "PaDTypes.hpp"
#include "PaDFactory.hpp"

#include "PaDConcreteProductA.hpp"
#include "PaDConcreteProductB.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FConcreteFactory : FFactory, FObject
		{
			FConcreteFactory();

			virtual ~FConcreteFactory();

			virtual FConcreteProductA* ProduceA();

			virtual FConcreteProductB* ProduceB();


		};



	}



}