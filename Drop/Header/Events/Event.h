#ifndef Entity_h
	#define Entity_h
	#include "Entity.h"
#endif

namespace Drop
{
	class Event
	{
	public:
		Event();

		~Event();

		const Drop::Entity& Initiator;
	};
}