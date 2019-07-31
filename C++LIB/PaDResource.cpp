#include "pch.h"
#include "framework.h"

#include "PaDResource.hpp"

using namespace PaD;
using namespace PaD::Creational;
using namespace PaD::Types;

struct FResource::_FEntry;

TList<FResource::_FEntry> FResource::_List = TList<FResource::_FEntry>();
FResource::_FEntry* FResource::_Next = NullPtr;
FResource* FResource::_Active = NullPtr;

FResource::FResource() : FObject()
{
	_Index = 0;
	_Entry = _Next ? _Next : &_List.New(_List.Item(), _Index);
	_Next = _Entry->_Next;
	_Entry->Pointer = this;
	_Entry->_bOccupied = True;
}

FResource::~FResource()
{
	_Entry->_bOccupied = False;
	_Entry->_Next = _Next;
	_Next = _Entry;
}

FSize FResource::Index()
{
	return _Index;
}

FVoid FResource::Active()
{
	if (_Active) { _Active->Save(); }
	_Active = _List[_Index].Pointer;
	_Active->Load();
}

FVoid FResource::Use(FSize Index)
{
	auto Resource = _List[Index].Pointer;
	Resource->Active();
}

FVoid FResource::Clear(FSize Index)
{
	delete _List[Index].Pointer;
}

FResource* FResource::Pointer(FSize Index)
{
	return _List[Index].Pointer;
}

FResource::_FEntry::_FEntry()
{
	Pointer = NullPtr;
	_bOccupied = False;
}

FResource::_FEntry::~_FEntry()
{
	 Pointer = NullPtr;
	_bOccupied = False;
}