#ifndef Rectangle_h
	#define Rectangle_h
	#include "Rectangle.h"
#endif

namespace Drop
{
	Rectangle::Rectangle(int positionX, int positionY, int width, int height)
	{
		sDLRectangle = SDL_Rect();
		sDLRectangle.x = positionX;
		sDLRectangle.y = positionY;
		sDLRectangle.w = width;
		sDLRectangle.h = height;
	}

	SDL_Rect Rectangle::GetSDLRectangle(void)
	{
		return sDLRectangle;
	}

	int Rectangle::GetPositionX(void)
	{
		return sDLRectangle.x;
	}

	void Rectangle::SetPositionX(int positionX)
	{
		this->sDLRectangle.x = positionX;
	}

	int Rectangle::GetPositionY(void)
	{
		return sDLRectangle.y;
	}

	void Rectangle::SetPositionY(int positionY)
	{
		this->sDLRectangle.y = positionY;
	}

	int Rectangle::GetWidth(void)
	{
		return sDLRectangle.w;
	}

	void Rectangle::SetWidth(int width)
	{
		this->sDLRectangle.w = width;
	}

	int Rectangle::GetHeight(void)
	{
		return sDLRectangle.h;
	}

	void Rectangle::SetHeight(int height)
	{
		this->sDLRectangle.h = height;
	}
}