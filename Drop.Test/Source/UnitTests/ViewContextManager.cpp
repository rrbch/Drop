#ifndef Game_h
	#define Game_h
	#include "Game.h"
#endif

#ifndef ViewContextManager_h
	#define ViewContextManager_h
	#include "ViewContextManager.h"
#endif

#ifndef ViewContextChangeEvent_h
	#define ViewContextChangeEvent_h
	#include "Events/ViewContextChangeEvent.h"
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
			Drop::Game game = Drop::Game();
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(game);
		}
		
		TEST_METHOD(Destructor)
		{
			Drop::Game game = Drop::Game();
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(game);
		}
		
		TEST_METHOD(ExplorationViewContextIsDefaultContext)
		{
			Drop::Game game = Drop::Game();
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(game);
			Drop::ExplorationViewContext* explorationViewContext = (Drop::ExplorationViewContext*)viewContextManager.activeViewContext;
		}
		
		/* TODO - Change the view context to something else than the ExplorationViewContext
		TEST_METHOD(ChangeToExplorationViewContext)
		{
			Drop::ViewContextManager viewContextManager = Drop::ViewContextManager(nullptr);
			Drop::ExplorationViewContext* explorationViewContext = (Drop::ExplorationViewContext*)viewContextManager.activeViewContext;
		}
		*/
	};
}