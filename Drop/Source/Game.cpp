#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef Game_h
	#define Game_h
	#include "Game.h"
#endif

#ifndef Rectangle_h
	#define Rectangle_h
	#include "Rectangle.h"
#endif

namespace Drop
{
	// Public
	Game::Game(void)
	{
		InitializeSDL();
		InitializeFields();
	}

	Game::~Game(void)
	{
		TerminateSDL();
		DeleteFields();
	}

	// Private
	void Game::InitializeSDL(void)
	{
		SDL_Init(SDL_INIT_VIDEO);
	}

	void Game::TerminateSDL(void)
	{
		SDL_Quit();
	}

	void Game::Start(void)
	{
		SDL_Event currentEvent;
		while (true)
		{
			if (SDL_PollEvent(&currentEvent) == 0)
			{
				continue;
			}

			viewContextManager->activeViewContext->HandleEvent(currentEvent);
		}
	}

	void Game::InitializeFields(void)
	{
		window = new Drop::Window(640, 480, "Drop 0.1");
		renderer = new Drop::Renderer(window->GetSDLWindow());
		viewContextManager = new Drop::ViewContextManager(renderer);
	}

	void Game::DeleteFields(void)
	{
		delete(window);
		delete(renderer);
		delete(viewContextManager);
	}
}