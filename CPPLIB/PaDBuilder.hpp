#pragma once

#include "PaDTypes.hpp"
#include "PaDProduct.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FBuilder
		{
			virtual ~FBuilder() = 0;

			virtual FVoid PreformStepA() = 0;

			virtual FVoid PreformStepB() = 0;

			virtual FVoid Reset() = 0;


		};



	}



}