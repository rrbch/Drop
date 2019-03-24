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
		InitializeFields(framesPerSecond);
	}

	FrameManager::~FrameManager(void)
	{}

	void FrameManager::StartNewFrame(void)
	{
		IncreaseFrameCount();

		int frameWorkDuration = CalculateFrameWorkDuration(frameStart);
		int remainingFrameDuration = CalculateRemainingFrameDuration(frameWorkDuration);
		SleepForRemainingFrameDuration(remainingFrameDuration);

		int totalFrameDuration = CalculateTotalFrameDuration(frameWorkDuration, remainingFrameDuration);
		ProceedSecond(totalFrameDuration);

		UpdateFramesPerSecond();
		
		SetStartOfNewFrame(totalFrameDuration);
	}

	int FrameManager::GetFramesPerSecond(void)
	{
		return framesPerSecond;
	}

	// Private
	void FrameManager::InitializeFields(int framesPerSecond)
	{
		this->framesPerSecond = framesPerSecond;

		desiredFrameDuration = 0;
		frameCount = 0;
		frameStart = 0;
		millisecondsSinceLastSecond = 0;

		desiredFrameDuration = CalculateDesiredFrameDuration(framesPerSecond);
		nonAttributableSecondFraction = CalculateNonAttributableSecondFraction(millisecondsPerSecond, framesPerSecond);
	}

	int FrameManager::CalculateDesiredFrameDuration(int framesPerSecond)
	{
		return millisecondsPerSecond / framesPerSecond;
	}

	int FrameManager::CalculateNonAttributableSecondFraction(int millisecondsPerSecond, int framesPerSecond)
	{
		return millisecondsPerSecond % framesPerSecond;
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

		return remainingFrameDuration;
	}

	void FrameManager::SleepForRemainingFrameDuration(int frameDuration)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(frameDuration));
	}

	int FrameManager::CalculateTotalFrameDuration(int frameWorkDuration, int remainingFrameDuration)
	{
		return frameWorkDuration + remainingFrameDuration;
	}

	void FrameManager::IncreaseFrameCount(void)
	{
		frameCount++;
	}

	void FrameManager::ProceedSecond(int frameDuration)
	{
		millisecondsSinceLastSecond += frameDuration;
	}

	void FrameManager::UpdateFramesPerSecond(void)
	{
		if (IsSecondElapsed(millisecondsSinceLastSecond))
		{
			framesPerSecond = frameCount;
			ResetFrameCount();
			ResetMillisecondsSinceLastSecond();
		}
		else if(AreSecondsElapsed(millisecondsSinceLastSecond))
		{
			framesPerSecond = 1;
			ResetFrameCount();
			ResetMillisecondsSinceLastSecond();
		}
	}

	bool FrameManager::IsSecondElapsed(int elapsedMilliseconds)
	{
		return CalculateSecondsElapsed(elapsedMilliseconds + nonAttributableSecondFraction) == 1;
	}

	int FrameManager::CalculateSecondsElapsed(int elapsedMilliseconds)
	{
		return elapsedMilliseconds / millisecondsPerSecond;
	}

	void FrameManager::ResetFrameCount(void)
	{
		frameCount = 0;
	}

	void FrameManager::ResetMillisecondsSinceLastSecond(void)
	{
		millisecondsSinceLastSecond = 0;
	}

	bool FrameManager::AreSecondsElapsed(int elapsedMilliseconds)
	{
		return CalculateSecondsElapsed(elapsedMilliseconds + nonAttributableSecondFraction) > 1;
	}

	void FrameManager::SetStartOfNewFrame(int lastFrameDuration)
	{
		frameStart = SDL_GetTicks();
	}
}