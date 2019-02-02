#ifndef SDL_h
#define SDL_h
#include <SDL.h>
#endif

namespace Drop
{
	class Rectangle
	{
	public:
		Rectangle(int positionX, int positionY, int width, int height);

		SDL_Rect GetSDLRectangle(void);

	private:
		SDL_Rect sDLRectangle;
	};
}