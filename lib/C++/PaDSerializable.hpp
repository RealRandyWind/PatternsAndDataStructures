#pragma once

#include "PaDTypes.hpp"

namespace PaD
{
	using namespace Types;

	struct FSerializable
	{
		virtual ~FSerializable() = 0;

		virtual FVoid Serialize(FByte*) = 0;

		virtual FVoid DeSerialize(FByte*) = 0;


	};



}