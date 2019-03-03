#ifndef Entity_h
	#define Entity_h
	#include "Entity.h"
#endif

namespace Drop
{
	class Event
	{
	public:
		Event(Entity& initiator) : Initiator(initiator) {}

		virtual ~Event(void) = 0;

		const Drop::Entity& Initiator;
	};
}