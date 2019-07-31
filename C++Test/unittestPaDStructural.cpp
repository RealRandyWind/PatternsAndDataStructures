#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "PaDStructural.hpp"
#include "PaDConsumer.hpp"
#include "PaDService.hpp"

namespace PaDTest
{
	using namespace PaD;
	using namespace PaD::Types;
	using namespace PaD::Structural;

	TEST_CLASS(UnitTestPaDStructural)
	{
	public:
		
		TEST_METHOD(TestAdapter)
		{
			auto Consumer = new FConsumer();
			auto Service = new FService();
			auto Adapter = new FAdapter(Service);
			FProtocol* Protocol = Adapter;
			Consumer->ChangeProtocol(Protocol);
			Consumer->Operate();
		}

		TEST_METHOD(TestBridge)
		{
			auto Consumer = new FConsumer();
			auto Implementation = new FConcreteImplementation();
			Consumer->ChangeImplementation(Implementation);
			Consumer->Operate();
		}

		TEST_METHOD(TestComposite)
		{
			auto Consumer = new FConsumer();
			auto Composite = new FComposite();
			Consumer->ChangeComposite(Composite);

			Consumer->AddComponent(new FConcreteComponent());
			Consumer->AddComponent(new FConcreteComponent());
			Consumer->AddComponent(new FConcreteComponent());
			Consumer->AddComponent(new FConcreteComponent());
			Consumer->Operate();
		}

		TEST_METHOD(TestDecorator)
		{
			auto Consumer = new FConsumer();
			auto Decorator = new FConcreteDecorator(new FConcreteComponent());
			Consumer->ChangeDecorator(Decorator);
			Consumer->Operate();
		}

		TEST_METHOD(TestFacade)
		{

		}

		TEST_METHOD(TestFlyweight)
		{
		}

		TEST_METHOD(TestProxy)
		{
		}
	};
}
