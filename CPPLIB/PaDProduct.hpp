#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FProduct
		{
			virtual ~FProduct() = 0;

			virtual FVoid Consume() = 0;


		};



	}



}