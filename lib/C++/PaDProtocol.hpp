#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDData.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FProtocol
		{
			virtual ~FProtocol() = 0;

			virtual FObject* Method(FData*) = 0;


		};



	}



}