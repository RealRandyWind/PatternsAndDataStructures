#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

#include "PaDFactory.hpp"

namespace PaD
{
	namespace Creational
	{
		struct FUser : FObject
		{
			FFactory * _Factory;
			
			FUser(FFactory *);

			virtual ~FUser();

			virtual FVoid Operate();


		};



	}



}