#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef IQueueEvents_h
	#define IQueueEvents_h
	#include "IQueueEvents.h"
#endif

#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

namespace Drop
{
	class ViewContext
	{
	public:
		ViewContext(Drop::IQueueEvents& iQueueEvents);

		virtual void HandleEvent(SDL_Event sDLEvent) = 0;

	protected:
		Drop::IQueueEvents& iQueueEvents;
	};
}