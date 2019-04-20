#ifndef std_vector
	#define std_vecotr
	#include <vector>
#endif

#ifndef Animation_h
	#define Animation_h
	#include "Animation.h"
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
	// Public
	Animation::Animation(std::string textureName, Drop::Point* position, Drop::Point* startPosition, std::vector<int>* spriteDelays, int width, int height, bool isLooping)
		: Sprite(textureName, position, width, height)
	{
		StartPosition = startPosition;
		IsLooping = isLooping;
		SpriteDelays = spriteDelays;
	}

	Animation::~Animation(void)
	{
		delete(StartPosition);
		delete(SpriteDelays);
	}
}