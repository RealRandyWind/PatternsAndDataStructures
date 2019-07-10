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

		virtual TypeItem& New(FSize& Index)
		{
			auto bResize = this->_Size >= this->_BufferSize;

			if (bResize) { this->Reserve(this->_Size = this->_IncrementSize); }
			Index = this->_Size;
			auto& Result = this->_Data[Index];
			++this->_Size;
			return Result;
		}

		virtual FVoid Reserve(FSize ReserveSize)
		{
			_Data = (TypeItem*)realloc(_Data, ReserveSize * sizeof(TypeItem));
			_BufferSize = ReserveSize;
			if (ReserveSize < _Size) { _Size = ReserveSize; }
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