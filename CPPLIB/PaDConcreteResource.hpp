#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDResource.hpp"

namespace PaD
{
	namespace Creational
	{
		struct FConcreteResource : FResource
		{
			FConcreteResource();

			virtual ~FConcreteResource();

			virtual FVoid Load();

			virtual FVoid Save();

			static FBoolean _Initialze();

			static FBoolean _Terminate();

			static FInitializer* _Initializer;

		};



	}



}