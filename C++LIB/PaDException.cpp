#include "pch.h"
#include "framework.h"

#include "PaDException.hpp"

using namespace PaD;
using namespace PaD::Types;

TList<FException::FOnException> FException::_Listeners = TList<FException::FOnException>();

FException::FException() : FObject()
{
	Function = File = NullPtr;
	Line = Colmn = Code = 0;
	_Trigger(this);
}

FException::~FException()
{

}

FSize FException::Add(FOnException OnException)
{

	return 0;
}

FVoid FException::Remove(FSize Index)
{

}

FVoid FException::Remove(FOnException OnException)
{

}

FVoid FException::_Trigger(FException* Exception)
{
	for (auto &Listener : _Listeners)
	{
		Listener(Exception);
	}
}