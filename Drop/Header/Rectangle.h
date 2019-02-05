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

		int GetPositionX(void);

		void SetPositionX(int positionX);

		int GetPositionY(void);

		void SetPositionY(int positionY);

		int GetWidth(void);

		void SetWidth(int width);

		int GetHeight(void);

		void SetHeight(int height);

	private:

		SDL_Rect sDLRectangle;
	};
}