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
		bool canExecute = true;
		while (canExecute)
		{
			renderer->LoadTexture("C:\\Users\\Niklas\\source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png");

			Drop::Rectangle sourceRectangle = Drop::Rectangle(16, 64, 16, 16);
			Drop::Rectangle destinationRectangle = Drop::Rectangle(0, 0, 16, 16);

			renderer->SetDrawColor(0, 0, 0, 255);
			renderer->Clear();

			renderer->SetDrawColor(255, 255, 255, 255);

			renderer->Copy(sourceRectangle, destinationRectangle);
			renderer->Present();

			if (SDL_PollEvent(&currentEvent) == 0)
			{
				continue;
			}

			while (true)
			{
				viewContextManager->activeViewContext->HandleEvent(currentEvent);
			}
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