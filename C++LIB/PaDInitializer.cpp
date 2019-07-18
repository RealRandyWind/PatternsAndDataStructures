#include "pch.h"
#include "framework.h"

#include "PaDInitializer.hpp"

using namespace PaD;
using namespace PaD::Types;

FInitializer::FInitializer(FOnInitialize OnInitialize, FOnTerminate OnTerminate) : FObject()
{
	_bTerminating = _bInitializing = _bInitialized = False;
	_OnTerminate = OnTerminate;
	if (OnInitialize)
	{
		_bInitializing = True;
		_bInitialized = OnInitialize();
		_bInitializing = False;
	}
}

FInitializer::~FInitializer()
{
	auto bTerminate = _bInitialized && _OnTerminate && !_bTerminating && !_bInitializing;
	if (bTerminate)
	{
		_bTerminating = True;
		_bInitialized = !_OnTerminate();
		_bTerminating = False;
	}
}