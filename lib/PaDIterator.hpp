#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeElement>
	struct TIterator : FObject
	{
		using FElement = TypeElement;

		TIterator() : FObject() { }

		virtual ~TIterator() { }


	};



}