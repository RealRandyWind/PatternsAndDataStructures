#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDProduct.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FBuilder : FObject
		{
			virtual ~FBuilder() = 0;

			virtual FVoid PreformStepA() = 0;

			virtual FVoid PreformStepB() = 0;

			virtual FVoid Reset() = 0;


		};



	}



}