#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
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
		ViewContext(Drop::Renderer* renderer);

		virtual void HandleUserInput(SDL_Event sDLEvent) = 0;

	protected:
		Drop::Renderer* renderer;
	};
}