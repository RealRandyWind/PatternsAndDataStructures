#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FImplementation
		{
			virtual ~FImplementation() = 0;

			virtual FVoid MethodeA() = 0;

			virtual FVoid MethodeB() = 0;

			virtual FVoid MethodeC() = 0;


		};



	}



}