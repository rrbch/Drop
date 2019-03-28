#ifndef AnimationFrame_h
	#define AnimationFrame_h
	#include "AnimationFrame.h"
#endif

namespace Drop
{
	// Public
	AnimationFrame::AnimationFrame(int delayInFrames, int positionX, int positionY, int width, int height)
	{
		this->delayInFrames = delayInFrames;
		this->positionX = positionX;
		this->positionY = positionY;
		this->width = width;
		this->height = height;
	}

	AnimationFrame::~AnimationFrame(void)
	{}

	int AnimationFrame::GetDelayInFrames(void)
	{
		return delayInFrames;
	}

	int AnimationFrame::GetPositionX(void)
	{
		return positionX;
	}

	int AnimationFrame::GetPositionY(void)
	{
		return positionY;
	}

	int AnimationFrame::GetWidth(void)
	{
		return width;
	}

	int AnimationFrame::GetHeight(void)
	{
		return height;
	}
}