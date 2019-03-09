#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef Game_h
	#define Game_h
	#include "Game.h"
#endif

int main(int argumentCount, char* argumentValues[])
{
	Drop::Game game = Drop::Game();
	game.Run();

	return 0;
}