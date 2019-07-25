#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeNode>
	struct TGraph
	{
		using FNode = TypeNode;

		using FItem = TypeItem;

		virtual ~TGraph() = 0 { };
		
		virtual TypeNode Node()
		{
			return TypeNode();
		}

		virtual TypeNode* NewNode()
		{
			return new TypeNode();
		}


	};



}