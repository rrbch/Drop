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
		Entity(const Position* position, const Sprite* sprite);

		~Entity();

		const Position* Position;

		const Sprite* Sprite;
	};
}