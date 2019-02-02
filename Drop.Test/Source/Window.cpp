#include <Window.cpp>

#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_Test
{
	TEST_CLASS(WindowTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::Window(0, 0, "");
		}

		TEST_METHOD(Destructor)
		{
			Drop::Window(0, 0, "");
		}

		TEST_METHOD(GetSDLWindow)
		{
			Drop::Window window = Drop::Window(0, 0, "title");
			window.GetSDLWindow();
		}
	};
}