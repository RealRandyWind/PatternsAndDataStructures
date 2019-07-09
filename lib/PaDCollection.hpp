#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeElement>
	struct TCollection
	{
		using FElement = TypeElement;

		virtual ~TCollection() = 0;


	};



}