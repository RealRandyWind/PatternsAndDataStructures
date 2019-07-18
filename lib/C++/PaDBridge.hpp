#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDImplementation.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FBridge : FObject
		{
			FImplementation* _Implementation;

			FBridge(FImplementation*);

			virtual ~FBridge();

			virtual FVoid FeatureA();

			virtual FVoid FeatureB();


		};



	}



}