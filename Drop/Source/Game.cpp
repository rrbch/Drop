#ifndef SDL_h
#define SDL_h
#include <SDL.h>
#endif

#ifndef Game_h
#define Game_h
#include "Game.h"
#endif

namespace Drop
{
	Game::Game(void)
	{
		InitializeSDL();
	}

	Game::~Game(void)
	{
		TerminateSDL();
	}

	void Game::InitializeSDL(void)
	{
		SDL_Init(SDL_INIT_VIDEO);
	}

	void Game::TerminateSDL(void)
	{
		SDL_Quit();
	}
}