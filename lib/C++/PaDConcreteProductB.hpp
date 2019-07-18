#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDProduct.hpp"

namespace PaD
{
	namespace Creational
	{
		struct FConcreteProductB : FProduct, FObject
		{
			FConcreteProductB();

			virtual ~FConcreteProductB();

			virtual FVoid Consume();

			virtual FBoolean Prepare();


		};



	}



}