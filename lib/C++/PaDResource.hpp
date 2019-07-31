#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"
#include "PaDInitializer.hpp"
#include "PaDList.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FResource : FObject
		{
			struct _FEntry
			{
				FBoolean _bOccupied;
				union
				{
					FResource* Pointer;
					_FEntry* _Next;
				};

				_FEntry();

				~_FEntry();


			};

			_FEntry* _Entry;
			FSize _Index;

			FResource();
			
			virtual ~FResource();

			virtual FSize Index() final;

			virtual FVoid Active() final;

			virtual FVoid Save() = 0;

			virtual FVoid Load() = 0;

			static FVoid Use(FSize);

			static FVoid Clear(FSize);

			static FResource* Pointer(FSize);

		private:
			static TList<_FEntry> _List;
			static FResource* _Active;
			static _FEntry* _Next;


		};



	}



}