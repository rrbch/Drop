#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

namespace Drop
{
	// Public
	Renderer::Renderer(SDL_Window* sDLWindow)
	{
		this->sDLWindow = sDLWindow;

		InitializeSDLImage();
		InitializeSDLRenderer();
	}

	Renderer::~Renderer(void)
	{
		DestroySDLTexture();
		DestroySDLRenderer();
		TerminateSDLImage();
	}

	void Renderer::LoadTexture(std::string filePath)
	{
		loadedSDLTexture = IMG_LoadTexture(
			SDLRenderer,
			filePath.c_str()
		);
	}

	void Renderer::SetDrawColor(uint8_t redValue, uint8_t greenValue, uint8_t blueValue, uint8_t alphaValue)
	{
		SDL_SetRenderDrawColor(
			SDLRenderer,
			redValue,
			greenValue,
			blueValue,
			alphaValue);
	}

	void Renderer::Clear(void)
	{
		SDL_RenderClear(SDLRenderer);
	}

	void Renderer::Copy(Rectangle sourceRactangle, Rectangle destinationRectangle)
	{
		SDL_RenderCopy(
			SDLRenderer,
			loadedSDLTexture,
			&sourceRactangle.GetSDLRectangle(),
			&destinationRectangle.GetSDLRectangle()
		);
	}

	void Renderer::Present(void)
	{
		SDL_RenderPresent(SDLRenderer);
	}

	void Renderer::DrawSprite(Drop::Sprite& sprite, Drop::Point position)
	{
		LoadTexture(sprite.TextureName);

		Drop::Rectangle sourceRectangle = Drop::Rectangle(sprite.Position->X, sprite.Position->Y, sprite.Width, sprite.Height);
		Drop::Rectangle destinationRectangle = Drop::Rectangle(position.X * sprite.Width, position.Y * sprite.Height, sprite.Width, sprite.Height);

		SetDrawColor(0, 0, 0, 255);
		Clear();

		SetDrawColor(255, 255, 255, 255);

		Copy(sourceRectangle, destinationRectangle);
		Present();
	}

	// Private
	void Renderer::InitializeSDLImage(void)
	{
		IMG_Init(IMG_INIT_PNG);
	}

	void Renderer::TerminateSDLImage(void)
	{
		IMG_Quit();
	}

	void Renderer::InitializeSDLRenderer(void)
	{
		SDLRenderer = SDL_CreateRenderer(
			sDLWindow,
			-1,
			SDL_RENDERER_ACCELERATED);
	}

	void Renderer::DestroySDLRenderer(void)
	{
		SDL_DestroyRenderer(SDLRenderer);
	}

	void Renderer::DestroySDLTexture(void)
	{
		SDL_DestroyTexture(loadedSDLTexture);
	}
}