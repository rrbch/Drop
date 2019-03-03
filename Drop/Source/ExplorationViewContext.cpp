#ifndef ExplorationViewContext_h
	#define ExplorationViewContext_h
	#include "ExplorationViewContext.h"
#endif

namespace Drop
{
	// Public
	ExplorationViewContext::ExplorationViewContext(Drop::IQueueEvents& iQueueEvents) : Drop::ViewContext(iQueueEvents)
	{
		playerPosition = new Drop::Position(0, 0);
		playerSprite = new Drop::Sprite(
			"C:\\Users\\Niklas\\source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png",
			16,
			64,
			16,
			16
		);
	}

	ExplorationViewContext::~ExplorationViewContext(void)
	{
		delete(playerPosition);
		delete(playerSprite);
	}

	void ExplorationViewContext::HandleEvent(SDL_Event sDLEvent)
	{
		switch (sDLEvent.key.keysym.scancode)
		{
			case SDL_SCANCODE_ESCAPE:
				break;
			case SDL_SCANCODE_KP_8:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->Y -= 16;
				}
				break;
			case SDL_SCANCODE_KP_9:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->X += 16;
					playerPosition->Y -= 16;
				}
				break;
			case SDL_SCANCODE_KP_6:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->X += 16;
				}
				break;
			case SDL_SCANCODE_KP_3:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->X += 16;
					playerPosition->Y += 16;
				}
				break;
			case SDL_SCANCODE_KP_2:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->Y += 16;
				}
				break;
			case SDL_SCANCODE_KP_1:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->X -= 16;
					playerPosition->Y += 16;
				}
				break;
			case SDL_SCANCODE_KP_4:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->X -= 16;
				}
				break;
			case SDL_SCANCODE_KP_7:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					playerPosition->X -= 16;
					playerPosition->Y -= 16;
				}
				break;
			default:
				break;
		}
	}
}