#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef IQueueEvents_h
	#define IQueueEvents_h
	#include "IQueueEvents.h"
#endif

#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

#ifndef MoveCommand_h
	#define MoveCommand_h
	#include "Commands/MoveCommand.h"
#endif

namespace Drop
{
	class ExplorationViewContext : public Drop::ViewContext
	{
	public:
		ExplorationViewContext(Drop::IQueueEvents& iQueueEvents);

		~ExplorationViewContext(void);

		void HandleEvent(SDL_Event sDLEvent) override;

	private:
		Drop::MoveCommand* moveCommand;

		Drop::Entity* player;

		Drop::MoveDirection SDLScanCodeToMoveDirection(SDL_Scancode sDLScancode);
	};
}