#ifndef EntityMovedEvent_h
#define EntityMovedEvent_h
#include "Events/EntityMovedEvent.h"
#endif

namespace Drop
{
	EntityMovedEvent::EntityMovedEvent(Drop::Entity& initiator, Drop::Position* oldPosition) : OldPosition(oldPosition),
		Drop::Event(initiator)
	{}

	EntityMovedEvent::~EntityMovedEvent(void)
	{
		delete(OldPosition);
	}
}