#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef std_chrono
	#define std_chrono
	#include <chrono>
#endif

#ifndef std_thread
	#define std_thread
	#include <thread>
#endif

#ifndef FrameManager_h
	#define FrameManager_h
	#include "FrameManager.h"
#endif

namespace Drop
{
	// Public
	FrameManager::FrameManager(int framesPerSecond)
	{
		this->framesPerSecond = framesPerSecond;

		desiredFrameDuration = CalculateDesiredFrameDuration(framesPerSecond);
	}

	FrameManager::~FrameManager(void)
	{}

	void FrameManager::StartNewFrame(void)
	{
		int frameWorkDuration = CalculateFrameWorkDuration(frameStart);
		int remainingFrameDuration = CalculateRemainingFrameDuration(frameWorkDuration);
		SleepForRemainingFrameDuration(remainingFrameDuration);

		int totalFrameDuration = frameWorkDuration + remainingFrameDuration;
		SetStartOfNewFrame(totalFrameDuration);
	}

	// Private
	int FrameManager::CalculateDesiredFrameDuration(int framesPerSecond)
	{
		return millisecondsPerSecond / framesPerSecond;
	}

	int FrameManager::CalculateFrameWorkDuration(int frameStart)
	{
		int frameEnd = SDL_GetTicks();
		return frameEnd - frameStart;
	}

	int FrameManager::CalculateRemainingFrameDuration(int frameWorkDuration)
	{
		int remainingFrameDuration = desiredFrameDuration - frameWorkDuration;
		if (remainingFrameDuration < 0)
		{
			remainingFrameDuration = 0;
		}

		return desiredFrameDuration;
	}

	void FrameManager::SleepForRemainingFrameDuration(int frameDuration)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}

	void FrameManager::SetStartOfNewFrame(int lastFrameDuration)
	{
		frameStart = lastFrameDuration;
	}
}