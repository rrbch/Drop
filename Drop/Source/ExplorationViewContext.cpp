#ifndef ExplorationViewContext_h
	#define ExplorationViewContext_h
	#include "ExplorationViewContext.h"
#endif

#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

#ifndef Sprite_h
	#define Sprite_h
	#include "Components/Sprite.h"
#endif

namespace Drop
{
	// Public
	ExplorationViewContext::ExplorationViewContext(Drop::IQueueEvents& iQueueEvents) : Drop::ViewContext(iQueueEvents)
	{
		moveCommand = new MoveCommand();

		Drop::Point* playerPosition = new Drop::Point(0, 0);

		Drop:Point* playerSpritePosition = new Point(16, 64);
		Drop::Sprite* playerSprite = new Drop::Sprite(
			"C:\\Users\\Niklas\\source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png",
			playerSpritePosition,
			16,
			16
		);

		player = new Drop::Entity(playerPosition, playerSprite);
	}

	ExplorationViewContext::~ExplorationViewContext(void)
	{
		delete(moveCommand);

		delete(player);
	}

	void ExplorationViewContext::HandleEvent(SDL_Event sDLEvent)
	{
		switch (sDLEvent.key.keysym.scancode)
		{
			case SDL_SCANCODE_ESCAPE:
				break;
			case SDL_SCANCODE_KP_8:
			case SDL_SCANCODE_KP_9:
			case SDL_SCANCODE_KP_6:
			case SDL_SCANCODE_KP_3:
			case SDL_SCANCODE_KP_2:
			case SDL_SCANCODE_KP_1:
			case SDL_SCANCODE_KP_4:
			case SDL_SCANCODE_KP_7:
				if (sDLEvent.type == SDL_KEYDOWN)
				{
					Drop::MoveDirection moveDirection = SDLScanCodeToMoveDirection(sDLEvent.key.keysym.scancode);

					moveCommand->MoveDirection = moveDirection;
					moveCommand->Initiator = player;

					Drop::Event* event = moveCommand->Execute();
					iQueueEvents.QueueEvent(event);
				}
				break;
			default:
				break;
		}
	}

	// Private
	Drop::MoveDirection ExplorationViewContext::SDLScanCodeToMoveDirection(SDL_Scancode sDLScancode)
	{
		switch (sDLScancode)
		{
			case SDL_SCANCODE_KP_8:
				return Drop::MoveDirection::North;
			case SDL_SCANCODE_KP_9:
				return Drop::MoveDirection::NorthEast;
			case SDL_SCANCODE_KP_6:
				return Drop::MoveDirection::East;
			case SDL_SCANCODE_KP_3:
				return Drop::MoveDirection::SouthEast;
			case SDL_SCANCODE_KP_2:
				return Drop::MoveDirection::South;
			case SDL_SCANCODE_KP_1:
				return Drop::MoveDirection::SouthWest;
			case SDL_SCANCODE_KP_4:
				return Drop::MoveDirection::West;
			case SDL_SCANCODE_KP_7:
				return Drop::MoveDirection::NorthWest;
			default:
				return Drop::MoveDirection::Undefined;
		}
	}
}