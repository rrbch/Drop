#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef SDL_image_h
	#define SDL_image_h
	#include <SDL_image.h>
#endif

#ifndef std_string
	#define std_string
	#include <string>
#endif

#ifndef Rectangle_h
	#define Rectangle_h
	#include "Rectangle.h"
#endif

namespace Drop
{
	class Renderer
	{
	public:
		Renderer(SDL_Window* sDLWindow);

		~Renderer(void);

		void LoadTexture(std::string filePath);

		void SetDrawColor(uint8_t redValue, uint8_t greenValue, uint8_t blueValue, uint8_t alphaValue);

		void Clear(void);

		void Copy(Rectangle targetRectangle, Rectangle destinationRectangle);

		void Present(void);

	private:
		SDL_Window* sDLWindow;

		SDL_Renderer* sDLRenderer;

		SDL_Texture* loadedSDLTexture;

		void InitializeSDLImage(void);

		void TerminateSDLImage(void);

		void InitializeSDLRenderer(void);

		void DestroySDLRenderer(void);

		void DestroySDLTexture(void);
	};
}