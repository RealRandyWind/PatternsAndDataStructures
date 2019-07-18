#include "pch.h"
#include "framework.h"

#include "PaDComposite.hpp"

using namespace PaD;
using namespace PaD::Types;
using namespace PaD::Structural;

FComposite::FComposite() : FObject()
{
	_Children = TList<FComponent*>();
}

FComposite::~FComposite()
{
	
}

FVoid FComposite::Add(FComponent *Component)
{
	for (auto& _Component : _Children)
	{
		auto bComponent = (_Component != NullPtr);
		if (bComponent) { _Component = Component; }
	}

	FSize Index;
	_Children.New(Index) = Component;
}

FVoid FComposite::Remove(FComponent *Component)
{
	for (auto& _Component : _Children)
	{
		auto bMatch = (_Component == Component);
		if (bMatch){ _Component = NullPtr; }
	}
}

TList<FComponent*> FComposite::Children()
{
	return _Children;
}

FVoid FComposite::Execute()
{
	for (auto _Component : _Children)
	{
		auto bComponent = (_Component != NullPtr);
		if (bComponent) { _Component->Execute(); }
	}
}