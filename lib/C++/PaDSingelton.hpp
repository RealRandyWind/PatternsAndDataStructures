#pragma once

#include "PaDTypes.hpp"
#include "PaDObject.hpp"

namespace PaD
{
	namespace Creational
	{
		using namespace Types;

		struct FSingelton : FObject
		{
			virtual ~FSingelton();

			static FSingelton* Instance();

		private:
			FSingelton();
			
			static FSingelton* _Instance;
		};



	}



}