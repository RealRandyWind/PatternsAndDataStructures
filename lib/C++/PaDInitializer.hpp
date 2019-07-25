#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

namespace PaD
{
	using namespace Types;

	struct FInitializer : FObject
	{
		using FOnInitialize = TFunction<FBoolean()>;
		using FOnTerminate = TFunction<FBoolean()>;

		FBoolean _bInitializing, _bTerminating, _bInitialized;
		FOnTerminate _OnTerminate;

		FInitializer(FOnInitialize, FOnTerminate);

		virtual ~FInitializer();


	};



}