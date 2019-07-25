#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "PaDCreational.hpp"

namespace PaDTest
{
	using namespace PaD;
	using namespace PaD::Types;
	using namespace PaD::Creational;

	TEST_CLASS(UnitTestPaDCreational)
	{
	public:
		
		TEST_METHOD(TestFactoryMethod)
		{
			auto CreatorA = new FConcreteCreatorA();
			FCreator* Creator = CreatorA;
			Creator->Operate();
		}

		TEST_METHOD(TestAbstractFactory)
		{
			auto FactoryA = new FConcreteFactory();
			FFactory* Factory = FactoryA;
			auto User = new FConsumer(Factory);
			User->Operate();
		}

		TEST_METHOD(TestBuilder)
		{
			
			
		}

		TEST_METHOD(TestPrototype)
		{
		}

		TEST_METHOD(TestSingelton)
		{
		}

		TEST_METHOD(TestResource)
		{
		}
	};
}
