#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

#ifndef std_string
	#define std_string
	#include <string>
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include <Sprite.h>
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{
	TEST_CLASS(SpriteTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::Sprite("", 0, 0, 0, 0);
		}

		TEST_METHOD(Destructor)
		{
			Drop::Sprite("", 0, 0, 0, 0);
		}
	};
}