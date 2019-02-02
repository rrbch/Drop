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
}