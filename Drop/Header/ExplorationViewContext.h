#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

#ifndef Position_h
	#define Position_h
	#include "Components/Position.h"
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include "Components/Sprite.h"
#endif

namespace Drop
{
	class ExplorationViewContext : public Drop::ViewContext
	{
	public:
		ExplorationViewContext(std::queue<Drop::Event>& eventQueue, Drop::Renderer& renderer);

		~ExplorationViewContext(void);

		void HandleEvent(SDL_Event sDLEvent) override;

	private:
		Drop::Position* playerPosition;

		Drop::Sprite* playerSprite;
	};
}