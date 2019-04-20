#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

#ifndef Game_h
	#define Game_h
	#include <Game.h>
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{		
	TEST_CLASS(GameTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::Game();
		}
	};
}