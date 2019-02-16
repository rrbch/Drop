#include <ViewContextManager.cpp>

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTest
{
	TEST_CLASS(ViewContextManagerTests)
	{
	public:

		TEST_METHOD(Constructor)
		{
			Drop::ViewContextManager();
		}

		TEST_METHOD(Destructor)
		{
			Drop::ViewContextManager();
		}

		TEST_METHOD(ExplorationViewContextIsDefaultView)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager();

			Drop::ExplorationViewContext& explorationViewContext = (Drop::ExplorationViewContext&)viewContextManager.activeViewContext;
		}

		TEST_METHOD(ChangeToExplorationViewContext)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager();
			viewContextManager.ChangeViewContext(Drop::ViewContextType::Exploration);

			Drop::ExplorationViewContext& explorationViewContext = (Drop::ExplorationViewContext&)viewContextManager.activeViewContext;
		}
	};
}