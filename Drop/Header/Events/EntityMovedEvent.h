#ifndef Event_h
#define Event_h
#include "Event.h"
#endif

#ifndef Position_h
#define Position_h
#include "Position.h"
#endif

namespace Drop
{
	class EntityMovedEvent : public Drop::Event
	{
	public:
		EntityMovedEvent(Drop::Entity& initiator, Drop::Position* oldPosition);

		~EntityMovedEvent(void);

		const Drop::Position* OldPosition;
	};
}