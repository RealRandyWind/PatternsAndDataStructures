#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeNode>
	struct TGraph
	{
		using FNode = TypeNode;

		virtual ~TGraph() = 0;


	};



}