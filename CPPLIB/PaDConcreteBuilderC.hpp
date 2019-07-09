#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDBuilder.hpp"
#include "PaDConcreteProductC.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FConcreteBuilderC : FBuilder, FObject
		{
			FConcreteProductC* _Result;

			FConcreteBuilderC();

			virtual ~FConcreteBuilderC();

			virtual FVoid PreformStepA();

			virtual FVoid PreformStepB();

			virtual FVoid Reset();

			virtual FConcreteProductC* Result();


		};



	}



}