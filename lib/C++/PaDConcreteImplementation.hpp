#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDImplementation.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FConcreteImplementation : FImplementation, FObject
		{
			FConcreteImplementation();

			virtual ~FConcreteImplementation();

			virtual FVoid MethodeA();

			virtual FVoid MethodeB();

			virtual FVoid MethodeC();


		};



	}



}