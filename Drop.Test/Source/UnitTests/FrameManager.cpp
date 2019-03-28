#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

#ifndef FrameManager_h
	#define FrameManager_h
	#include <FrameManager.h>
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{
	TEST_CLASS(FrameManagerTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::FrameManager frameManager = Drop::FrameManager(1);
		}

		TEST_METHOD(Constructor_InvalidFramesPerSecond)
		{
			auto constructorCall = [] {Drop::FrameManager(0); };
			Assert::ExpectException<std::invalid_argument>(constructorCall);
		}

		TEST_METHOD(Destructor)
		{
			Drop::FrameManager frameManager = Drop::FrameManager(1);
		}

		TEST_METHOD(StartNewFrame)
		{
			Drop::FrameManager frameManager = Drop::FrameManager(1);
			frameManager.StartNewFrame();
		}

		TEST_METHOD(GetFramesPerSecond)
		{
			Drop::FrameManager frameManager = Drop::FrameManager(1);
			frameManager.GetFramesPerSecond();
		}
	};
}