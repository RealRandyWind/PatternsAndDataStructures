#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDCollection.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeItem>
	struct TIterator : TCollection<TypeItem>, FObject
	{
		using FIterator = TIterator<TypeItem>;

		TIterator() : FObject() { }

		virtual ~TIterator() { }


	};



}