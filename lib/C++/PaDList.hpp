#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDCollection.hpp"

namespace PaD
{
	using namespace Types;

	template<typename TypeItem>
	struct TList : TCollection<TypeItem>, FObject
	{
		FSize _Size, _BufferSize, _IncrementSize;
		FBoolean _bIterateAll;
		TypeItem* _Data;

		TList() : FObject()
		{
			_IncrementSize = 64;
			_Size = _BufferSize = 0;
			_Data = NullPtr;
			_bIterateAll = False;
		}

		virtual ~TList()
		{
			auto bFree = (_Data != NullPtr);
			if (bFree) { free(_Data); }
		}

		virtual FVoid IterateAll(FBoolean bTrue = True)
		{
			_bIterateAll = bTrue;
		}

		virtual TypeItem& New(TypeItem Default, FSize &Index)
		{
			return (New(Index) = Default);
		}

		virtual TypeItem& New(FSize& Index)
		{
			auto bResize = (_Size >= _BufferSize);
			Index = _Size;
			if (bResize) { Reserve(_Size + _IncrementSize); }
			auto& Result = _Data[Index];
			++_Size;
			return Result;
		}

		virtual FVoid Reserve(FSize ReserveSize)
		{
			auto Pointer = realloc(_Data, ReserveSize * sizeof(TypeItem));
			auto bFail = Pointer == NullPtr && ReserveSize > 0;
			if (bFail) { return; }
			_Data = (TypeItem*)Pointer;
			_BufferSize = ReserveSize;
			if (ReserveSize < _Size) { _Size = ReserveSize; }
		}

		FBoolean Empty()
		{
			return _Size <= 0;
		}

		FSize Size()
		{
			return _Size;
		}

		TypeItem& operator[](FSize Index)
		{
			return _Data[Index];
		}

		TypeItem* begin()
		{
			return _Data;
		}

		TypeItem* end()
		{
			auto bNoData = !_Data;
			if (bNoData) { return NullPtr; }
			return _Data + (_bIterateAll ? _BufferSize : _Size);
		}


	};



}