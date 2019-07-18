#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDService.hpp"
#include "PaDProtocol.hpp"

namespace PaD
{
	namespace Structural
	{
		using namespace Types;

		struct FAdapter : FProtocol
		{
			FService* _Service;

			FAdapter(FService*);

			virtual ~FAdapter();

			virtual FObject* Method(FData*);

			virtual FByte* ConvertToServiceFormat(FData*);

			virtual FVoid ChangeService(FService*);

		};



	}



}