#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDService.hpp"
#include "PaDProtocol.hpp"

namespace PaD
{
	using namespace Types;
	using namespace Structural;

	struct FService : FProtocol
	{
		FService();

		virtual ~FService();

		virtual FObject* SpecialMethod(FByte*);


	};



}