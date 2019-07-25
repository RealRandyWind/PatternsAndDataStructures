#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FComponent
		{
			virtual ~FComponent() = 0 { };

			virtual FVoid Execute() = 0;


		};



	}



}