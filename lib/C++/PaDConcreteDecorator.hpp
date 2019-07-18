#pragma once

#include "PaDTypes.hpp"
#include "PaDDecorator.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FConcreteDecorator : FDecorator
		{
			FConcreteDecorator(FComponent*);

			virtual ~FConcreteDecorator();

			virtual FVoid Execute() override;

			virtual FVoid Extension();


		};



	}



}