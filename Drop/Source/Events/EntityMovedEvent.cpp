#ifndef EntityMovedEvent_h
	#define EntityMovedEvent_h
	#include "Events/EntityMovedEvent.h"
#endif

namespace Drop
{
	EntityMovedEvent::EntityMovedEvent(const Drop::Entity* initiator, const Drop::Position& position) : position(position),
		Drop::Event(initiator)
	{}

	EntityMovedEvent::~EntityMovedEvent(void)
	{}
}