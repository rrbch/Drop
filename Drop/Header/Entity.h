#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include "Sprite.h"
#endif

namespace Drop
{
	class Entity
	{
	public:
		Entity(Drop::Point* position, Drop::Sprite* sprite);

		~Entity(void);

		Drop::Point* Position;

		Drop::Sprite* Sprite;
	};
}