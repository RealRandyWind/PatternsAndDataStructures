#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDProduct.hpp"

namespace PaD
{
	namespace Creational
	{
		struct FConcreteProductA : FProduct, FObject
		{
			FConcreteProductA();

			virtual ~FConcreteProductA();

			virtual FVoid Consume();


		};



	}



}