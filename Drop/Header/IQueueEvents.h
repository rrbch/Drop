#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
#endif

namespace Drop
{
	class IQueueEvents
	{
	public:
		virtual void QueueEvent(Drop::Event* event) = 0;
	};
}