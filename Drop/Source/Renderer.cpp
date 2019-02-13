#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

namespace Drop
{
	// Public
	Renderer::Renderer(SDL_Window * sDLWindow)
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
			sDLRenderer,
			filePath.c_str()
		);
	}

	void Renderer::SetDrawColor(uint8_t redValue, uint8_t greenValue, uint8_t blueValue, uint8_t alphaValue)
	{
		SDL_SetRenderDrawColor(
			sDLRenderer,
			redValue,
			greenValue,
			blueValue,
			alphaValue);
	}

	void Renderer::Clear(void)
	{
		SDL_RenderClear(sDLRenderer);
	}

	void Renderer::Copy(Rectangle sourceRactangle, Rectangle destinationRectangle)
	{
		SDL_RenderCopy(
			sDLRenderer,
			loadedSDLTexture,
			&sourceRactangle.GetSDLRectangle(),
			&destinationRectangle.GetSDLRectangle()
		);
	}

	void Renderer::Present(void)
	{
		SDL_RenderPresent(sDLRenderer);
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
		sDLRenderer = SDL_CreateRenderer(
			sDLWindow,
			-1,
			SDL_RENDERER_ACCELERATED);
	}

	void Renderer::DestroySDLRenderer(void)
	{
		SDL_DestroyRenderer(sDLRenderer);
	}

	void Renderer::DestroySDLTexture(void)
	{
		SDL_DestroyTexture(loadedSDLTexture);
	}
}