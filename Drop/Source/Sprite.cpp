#ifndef std_string
	#define std_string
	#include <string>
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include "Sprite.h"
#endif

#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

namespace Drop
{
	Sprite::Sprite(std::string textureName, Drop::Point* position, int width, int height) 
		: TextureName(textureName)
	{
		Position = position;
		Width = width;
		Height = height;
	}

	Sprite::~Sprite(void)
	{
		delete(Position);
	}
}