#include <Game.cpp>

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTest
{		
	TEST_CLASS(GameTests)
	{
	public:
		
		TEST_METHOD(Constructor)
		{
			Drop::Game();
		}

		TEST_METHOD(Destructor)
		{
			Drop::Game();
		}
	};
}