#ifndef ExplorationViewContext_h
	#define ExplorationViewContext_h
	#include "ExplorationViewContext.h"
#endif

namespace Drop
{
	ExplorationViewContext::ExplorationViewContext(Drop::Renderer* renderer) : ViewContext(renderer) 
	{}

	void ExplorationViewContext::HandleEvent(SDL_Event sDLEvent)
	{}
}

/* Player movement
switch (sDLEvent.key.keysym.scancode)
{
	case SDL_SCANCODE_ESCAPE:
		break;
	case SDL_SCANCODE_KP_8:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() - 16);
		}
		break;
	case SDL_SCANCODE_KP_9:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() + 16);
			destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() - 16);
		}
		break;
	case SDL_SCANCODE_KP_6:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() + 16);
		}
		break;
	case SDL_SCANCODE_KP_3:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() + 16);
			destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() + 16);
		}
		break;
	case SDL_SCANCODE_KP_2:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() + 16);
		}
		break;
	case SDL_SCANCODE_KP_1:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() - 16);
			destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() + 16);
		}
		break;
	case SDL_SCANCODE_KP_4:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() - 16);
		}
		break;
	case SDL_SCANCODE_KP_7:
		if (sDLEvent.type == SDL_KEYDOWN)
		{
			destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() - 16);
			destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() - 16);
		}
		break;
	default:
		break;
}
*/