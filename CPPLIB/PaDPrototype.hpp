#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FPrototype
		{
			virtual ~FPrototype() = 0;

			virtual FPrototype* Clone() = 0;


		};



	}



}