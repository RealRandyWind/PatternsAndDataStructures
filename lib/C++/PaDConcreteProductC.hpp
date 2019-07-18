#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDProduct.hpp"

#include "PaDConcreteProductA.hpp"

namespace PaD
{
	namespace Creational
	{
		struct FConcreteProductC : FProduct, FObject
		{
			FConcreteProductA* _Feature;

			FConcreteProductC();

			virtual ~FConcreteProductC();

			virtual FVoid Consume();

			virtual FVoid Feature();


		};



	}



}