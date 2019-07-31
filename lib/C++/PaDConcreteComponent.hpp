#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDComponent.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FConcreteComponent : FObject, FComponent
		{
			FConcreteComponent();

			virtual ~FConcreteComponent();

			virtual FVoid Execute();


		};



	}



}