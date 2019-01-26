#ifndef CppUnitTest_h
#define CppUnitTest_h
#include "CppUnitTest.h"
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
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