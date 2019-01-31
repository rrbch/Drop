#ifndef CppUnitTest_h
#define CppUnitTest_h
#include "CppUnitTest.h"
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_Test
{		
	TEST_CLASS(Game)
	{
	public:
		
		TEST_METHOD(Constructor)
		{
			Game();
		}

		TEST_METHOD(Destructor)
		{
			Game();
		}
	};
}