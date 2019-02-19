#ifndef Sprite_h
	#define Sprite_h
	#include "Components/Sprite.h"
#endif

namespace Drop
{
	Sprite::Sprite(std::string source, int x, int y, int width, int height)
	{
		Source = source;
		X = x;
		Y = y;
		Width = width;
		Height = height;
	}
}