#ifndef EntityMovedEvent_h
	#define EntityMovedEvent_h
	#include "Events/EntityMovedEvent.h"
#endif

#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

namespace Drop
{
	EntityMovedEvent::EntityMovedEvent(Drop::Entity& initiator, Drop::Point* oldPosition)
		: Drop::Event(initiator)
	{
		OldPosition = oldPosition;
	}

	EntityMovedEvent::~EntityMovedEvent(void)
	{
		delete(OldPosition);
	}
}