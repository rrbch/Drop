#ifndef Position_h
	#define Position_h
	#include "Components/Position.h"
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include "Components/Sprite.h"
#endif

namespace Drop
{
	class Entity
	{
	public:
		Entity(Position* oldPosition, Sprite* sprite);

		~Entity(void);

		Position* Position;

		Sprite* Sprite;
	};
}