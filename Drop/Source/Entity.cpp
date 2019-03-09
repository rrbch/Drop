#ifndef Entity_h
	#define Entity_h
	#include "Entity.h"
#endif

namespace Drop
{
	Entity::Entity(Drop::Position* oldPosition, const Drop::Sprite* sprite) : Position(oldPosition), Sprite(sprite)
	{}

	Entity::~Entity(void)
	{
		delete(Position);
		delete(Sprite);
	}
}