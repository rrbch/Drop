#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
#endif

namespace Drop
{
	class Command
	{
	public:
		virtual Drop::Event* Execute(void) = 0;
	};
}