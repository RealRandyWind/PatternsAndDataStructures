#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDList.hpp"

namespace PaD
{
	using namespace Types;

	struct FException : FObject
	{
		using FOnException = TFunction<FVoid(FException*)>;

		FString Function, File;
		FSize Line, Colmn, Code;

		FException();

		virtual ~FException();

		static FSize Add(FOnException);
		
		static FVoid Remove(FSize);

		static FVoid Remove(FOnException);

	private:
		static TList<FOnException> _Listeners;

		static FVoid _Trigger(FException*);


	};



}