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
	class EntityMovedEvent : Drop::Event
	{
	public:
		EntityMovedEvent(const Drop::Entity* initiator, const Drop::Position& position);

		~EntityMovedEvent(void);

	private:
		const Drop::Position& position;
	};
}