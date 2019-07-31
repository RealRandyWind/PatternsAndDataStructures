#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "PaDBase.hpp"

namespace PaDTest
{
	using namespace PaD;
	using namespace PaD::Types;

	TEST_CLASS(UnitTestPaDBase)
	{
	public:
		
		TEST_METHOD(TestObject)
		{
			auto Object = new FObject();
			delete Object;
		}

		TEST_METHOD(TestList)
		{
			FSize Index;
			auto PtrList = new TList<FObject>();
			TList<FObject> List;
			TList<FObject*> ListPtr;
			auto Item = List.New(Index);
			auto Item2 = List.New(Index);
			auto PtrItem = PtrList->New(Index);
			auto PtrItem2 = PtrList->New(Index);
		}

		TEST_METHOD(TestInitializer)
		{
			FBoolean bTerminated = False, bInitialized = False;
			FInitializer::FOnInitialize OnInitialize = [&bInitialized]() { return (bInitialized = True); };
			FInitializer::FOnTerminate OnTerminate = [&bTerminated]() { return (bTerminated = True); };
			Assert::IsFalse(bInitialized);
			auto Initializer = new FInitializer(OnInitialize, OnTerminate);
			Assert::IsTrue(bInitialized);
			Assert::IsFalse(bTerminated);
			delete Initializer;
			Assert::IsTrue(bTerminated);
		}

		TEST_METHOD(TestIterator)
		{
			auto Iterator = TIterator<FObject>();
		}

		TEST_METHOD(TestException)
		{
			auto Exception = new FException();
			delete Exception;
		}

		TEST_METHOD(TestService)
		{
			auto Service = new FService();
			delete Service;
		}

		TEST_METHOD(TestConsumer)
		{
			auto Consumer = new FConsumer();
			delete Consumer;
		}
	};
}
