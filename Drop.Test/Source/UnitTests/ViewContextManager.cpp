#ifndef ViewContextManager_h
	#define ViewContextManager_h
	#include <ViewContextManager.h>
#endif

#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{
	TEST_CLASS(ViewContextManagerTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(nullptr);
		}
		
		TEST_METHOD(Destructor)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(nullptr);
		}
		
		TEST_METHOD(ExplorationViewContextIsDefaultContext)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(nullptr);
			Drop::ExplorationViewContext* explorationViewContext = (Drop::ExplorationViewContext*)viewContextManager.activeViewContext;
		}
		
		TEST_METHOD(ChangeToExplorationViewContext)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(nullptr);
			Drop::ExplorationViewContext* explorationViewContext = (Drop::ExplorationViewContext*)viewContextManager.activeViewContext;
		}
	};
}