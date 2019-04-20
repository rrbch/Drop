#ifndef Window_h
	#define Window_h
	#include <Window.h>
#endif

#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{
	TEST_CLASS(WindowTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::Window(0, 0, "");
		}
	
		TEST_METHOD(GetSDLWindow)
		{
			Drop::Window window = Drop::Window(0, 0, "title");
			window.SDLWindow;
		}
	};
}