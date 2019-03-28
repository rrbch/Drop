#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include <Renderer.h>
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{
	TEST_CLASS(RendererTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::Renderer(nullptr);
		}

		TEST_METHOD(Destructor)
		{
			Drop::Renderer(nullptr);
		}
	};
}