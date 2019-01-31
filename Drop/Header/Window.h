#ifndef SDL_h
#define SDL_h
#include <SDL.h>
#endif

#ifndef SDL_image_h
#define SDL_image_h
#include <SDL_image.h>
#endif

namespace Drop
{
	class Window
	{
	public:
		Window(int width, int height);

		~Window(void);

		void SetSDLWindow(SDL_Window& window);

		SDL_Window* GetSDLWindow(void);

	private:
		int width;

		int height;

		SDL_Window* sDLWindow;

		void InitializeSDLImage(void);

		void TerminateSDLImage(void);

		void InitializeSDLWindow(void);

		void DestroySDLWindow(void);
	};
}