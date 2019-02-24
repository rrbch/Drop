#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef std_queue
	#define std_queue
	#include <queue>
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
		ViewContext(std::queue<Drop::Event>& eventQueue, Drop::Renderer& renderer);

		virtual void HandleEvent(SDL_Event sDLEvent) = 0;

	protected:
		Drop::Renderer& renderer;

		std::queue<Drop::Event>& eventQueue;
	};
}