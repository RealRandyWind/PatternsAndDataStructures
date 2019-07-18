#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDComponent.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FDecorator : FObject, FComponent
		{
			FComponent *_Component;

			FDecorator(FComponent *);

			virtual ~FDecorator();

			virtual FVoid Execute();


		};



	}



}