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
			auto Consumer = new FConsumer(Factory);
			Consumer->Operate();
		}

		TEST_METHOD(TestBuilder)
		{
			auto BuilderC = new FConcreteBuilderC();
			FBuilder* Builder = BuilderC;
			auto Director = new FDirector(Builder);
			auto Consumer = new FConsumer();
			Consumer->ChangeDirector(Director);
			Consumer->Operate(FDirector::EConfiguration::Featured);
			auto Product = BuilderC->Result();
		}

		TEST_METHOD(TestPrototype)
		{
			auto ConcretePrototype = new FConcreteSubPrototype();
			FPrototype* Prototype = ConcretePrototype;
			auto Consumer = new FConsumer();
			Consumer->ChangePrototype(Prototype);
			Consumer->Operate();
		}

		TEST_METHOD(TestSingelton)
		{
			auto Singelton = FSingelton::Instance();
			auto Consumer = new FConsumer();
			Consumer->ChangeSingelton(Singelton);
		}

		TEST_METHOD(TestResource)
		{
			FResource* ResourceA = new FConcreteResource();
			FResource* ResourceB = new FConcreteResource();
			{
				FResource* ResourceC = new FConcreteResource();
			}
		}
	};
}
