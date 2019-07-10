#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeItem>
	struct TCollection
	{
		virtual ~TCollection() = 0;

		virtual TypeItem Item()
		{
			return TypeItem();
		}
	};



}