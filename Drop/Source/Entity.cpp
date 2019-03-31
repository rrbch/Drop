#ifndef Entity_h
	#define Entity_h
	#include "Entity.h"
#endif

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
	Entity::Entity(Drop::Point* position, Drop::Sprite* sprite)
	{
		Position = position;
		Sprite = sprite;
	}

	Entity::~Entity(void)
	{
		delete(Position);
		delete(Sprite);
	}
}