#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDProduct.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FCreator : FObject
		{
			FCreator();

			virtual ~FCreator();

			virtual FVoid Operate();

			virtual FProduct* Produce() = 0;


		};



	}



}