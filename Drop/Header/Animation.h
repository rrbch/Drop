#ifndef std_vector
	#define std_vecotr
	#include <vector>
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include "Sprite.h"
#endif

namespace Drop
{
	class Animation : public Sprite
	{
	public:
		Animation(std::string textureName, Drop::Point* position, int width, int height, bool isLooping, std::vector<int>* spriteDelays);

		~Animation(void);

		bool IsLooping;

		bool NeedsUpdate;

		int FrameCount;

		std::vector<int>* SpriteDelays;
	};
}