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
	FSize Index;
	Add(Component, Index);
}

FVoid FComposite::Add(FComponent* Component, FSize &Index)
{
	for (auto& _Component : _Children)
	{
		if (_Component) { _Component = Component; }
	}
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

FVoid FComposite::Remove(FSize Index)
{
	if (Index < _Children.Size())
	{
		_Children[Index] = NullPtr;
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
		if (_Component) { _Component->Execute(); }
	}
}