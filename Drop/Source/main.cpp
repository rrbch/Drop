#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef Game_h
	#define Game_h
	#include "Game.h"
#endif

#ifndef Window_h
	#define Window_h
	#include "Window.h"
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

#ifndef Rectangle_h
	#define Rectangle_h
	#include "Rectangle.h"
#endif

int main(int argumentCount, char* argumentValues[])
{
	Drop::Game game = Drop::Game();
	Drop::Window window = Drop::Window(640, 480, "Drop 0.1");
	Drop::Renderer renderer = Drop::Renderer(window.GetSDLWindow());

	renderer.LoadTexture("C:\\Users\\Niklas\\source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png");
	
	Drop::Rectangle sourceRectangle = Drop::Rectangle(16, 64, 16, 16);
	Drop::Rectangle destinationRectangle = Drop::Rectangle(0, 0, 16, 16);

	SDL_Event currentEvent;
	bool canExecute = true;
	while (canExecute)
	{
		renderer.SetDrawColor(0, 0, 0, 255);
		renderer.Clear();
	
		renderer.SetDrawColor(255, 255, 255, 255);

		renderer.Copy(sourceRectangle, destinationRectangle);
		renderer.Present();
	
		if (SDL_PollEvent(&currentEvent) == 0)
		{
			continue;
		}
	
		switch (currentEvent.key.keysym.scancode)
		{
			case SDL_SCANCODE_ESCAPE:
				canExecute = false;
				break;
			case SDL_SCANCODE_KP_8:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() - 16);
				}
				break;
			case SDL_SCANCODE_KP_9:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() + 16);
					destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() - 16);
				}
				break;
			case SDL_SCANCODE_KP_6:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() + 16);
				}
				break;
			case SDL_SCANCODE_KP_3:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() + 16);
					destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() + 16);
				}
				break;
			case SDL_SCANCODE_KP_2:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() + 16);
				}
				break;
			case SDL_SCANCODE_KP_1:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() - 16);
					destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() + 16);
				}
				break;
			case SDL_SCANCODE_KP_4:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() - 16);
				}
				break;
			case SDL_SCANCODE_KP_7:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.SetPositionX(destinationRectangle.GetPositionX() - 16);
					destinationRectangle.SetPositionY(destinationRectangle.GetPositionY() - 16);
				}
				break;
			default:
				continue;
		}
	}

	return 0;
}