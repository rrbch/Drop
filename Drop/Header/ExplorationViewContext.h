#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

namespace Drop
{
	class ExplorationViewContext : public Drop::ViewContext
	{
	public:
		ExplorationViewContext(Drop::Renderer* renderer);

		void HandleEvent(SDL_Event sDLEvent) override;
	};
}