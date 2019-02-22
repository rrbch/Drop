#ifndef Entity_h
	#define Entity_h
	#include "Entity.h"
#endif

namespace Drop
{
	Entity::Entity(const Drop::Position* position, const Drop::Sprite* sprite) : Position(position), Sprite(sprite)
	{}

	Entity::~Entity()
	{
		delete(Position);
		delete(Sprite);
	}
}