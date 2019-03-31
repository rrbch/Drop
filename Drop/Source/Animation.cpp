#ifndef std_vector
	#define std_vecotr
	#include <vector>
#endif

#ifndef Animation_h
	#define Animation_h
	#include "Animation.h"
#endif

namespace Drop
{
	Animation::Animation(std::string textureName, Drop::Point* position, int width, int height, bool isLooping, std::vector<int>* spriteDelays)
		: Sprite(textureName, position, width, height)
	{
		IsLooping = isLooping;
		SpriteDelays = spriteDelays;
	}

	Animation::~Animation(void)
	{
		delete(SpriteDelays);
	}
}