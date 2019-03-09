#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
#endif

namespace Drop
{
	class IProcessEvents
	{
	public:
		virtual void ProcessEvent(Drop::Event* userInput) = 0;
	};
}