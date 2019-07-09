#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

#include "PaDBuilder.hpp"

namespace PaD
{
	namespace Creational
	{
		struct FDirector : FObject
		{
			enum class EConfiguration : FEnum
			{
				_Unknown = Unknown,
				Featured,
				_Size
			};

			FBuilder* _Builder;

			FDirector(FBuilder*);

			virtual ~FDirector();

			virtual FVoid ChangeBuilder(FBuilder*);

			virtual FVoid Construct(EConfiguration);


		};



	}



}