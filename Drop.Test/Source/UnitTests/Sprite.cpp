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
			Drop::Point* spritePosition = new Drop::Point(0, 0);
			Drop::Sprite("", spritePosition, 0, 0);
		}
	};
}