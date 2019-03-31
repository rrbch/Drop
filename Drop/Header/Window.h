#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef std_string
	#define std_string
	#include <string>
#endif

namespace Drop
{
	class Window
	{
	public:
		Window(int width, int height, std::string title);

		~Window(void);

		SDL_Window* SDLWindow;

	private:
		int width;

		int height;

		std::string title;

		void InitializeSDLWindow(void);

		void DestroySDLWindow(void);
	};
}