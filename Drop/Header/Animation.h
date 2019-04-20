#ifndef std_vector
	#define std_vecotr
	#include <vector>
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
	class Animation : public Sprite
	{
	public:
		Animation(std::string textureName, Drop::Point* position, Drop::Point* startPosition, std::vector<int>* spriteDelays, int width, int height, bool isLooping);

		~Animation(void);

		Drop::Point* StartPosition;

		std::vector<int>* SpriteDelays;

		bool IsLooping;

		bool NeedsUpdate;

	private:
		int FrameCount;
	};
}