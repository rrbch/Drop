#ifndef SDL
#define SDL
#include <SDL.h>
#endif

#ifndef SDL_image
#define SDL_image
#include <SDL_image.h>
#endif

#ifndef Game_h
#define Game_h
#include "Game.h"
#endif

int main(int argumentCount, char* argumentValues[])
{
	Drop::Game game = Drop::Game();

	IMG_Init(IMG_INIT_PNG);

	SDL_Window* window = SDL_CreateWindow(
		"Test window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		0
	);

	SDL_Renderer* renderer = SDL_CreateRenderer(
		window, 
		-1, 
		SDL_RENDERER_ACCELERATED);

	SDL_Texture* tilesetTexture = IMG_LoadTexture(
		renderer,
		"C:\\Users\\Niklas\\source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png"
	);
	
	SDL_Rect targetRectangle;
	targetRectangle.x = 16;
	targetRectangle.y = 64;
	targetRectangle.w = 16;
	targetRectangle.h = 16;

	SDL_Rect destinationRectangle;
	destinationRectangle.x = 0;
	destinationRectangle.y = 0;
	destinationRectangle.w = 16;
	destinationRectangle.h = 16;

	SDL_Event currentEvent;
	bool canExecute = true;
	while (canExecute)
	{
		SDL_SetRenderDrawColor(
			renderer,
			0,
			0,
			0,
			255);
		SDL_RenderClear(renderer);

		SDL_SetRenderDrawColor(
			renderer,
			255,
			255,
			255,
			255);
		SDL_RenderCopy(
			renderer,
			tilesetTexture,
			&targetRectangle,
			&destinationRectangle
		);
		SDL_RenderPresent(renderer);

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
					destinationRectangle.y -= 16;
				}
				break;
			case SDL_SCANCODE_KP_9:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.x += 16;
					destinationRectangle.y -= 16;
				}
				break;
			case SDL_SCANCODE_KP_6:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.x += 16;
				}
				break;
			case SDL_SCANCODE_KP_3:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.x += 16;
					destinationRectangle.y += 16;
				}
				break;
			case SDL_SCANCODE_KP_2:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.y += 16;
				}
				break;
			case SDL_SCANCODE_KP_1:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.x -= 16;
					destinationRectangle.y += 16;
				}
				break;
			case SDL_SCANCODE_KP_4:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.x -= 16;
				}
				break;
			case SDL_SCANCODE_KP_7:
				if (currentEvent.type == SDL_KEYDOWN)
				{
					destinationRectangle.x -= 16;
					destinationRectangle.y -= 16;
				}
				break;
			default:
				continue;
		}
	}

	SDL_DestroyTexture(tilesetTexture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	IMG_Quit();

	return 0;
}