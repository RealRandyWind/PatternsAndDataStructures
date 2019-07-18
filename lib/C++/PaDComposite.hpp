#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDList.hpp"
#include "PaDComponent.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FComposite : FObject, FComponent
		{
			TList<FComponent*> _Children;

			FComposite();

			virtual ~FComposite();

			virtual FVoid Add(FComponent*);

			virtual FVoid Remove(FComponent*);

			virtual TList<FComponent*> Children();

			virtual FVoid Execute();


		};



	}



}