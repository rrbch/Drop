#ifndef Window_h
#define Window_h
#include "Window.h"
#endif

namespace Drop
{	
	// TODO - Window title parameter
	Window::Window(int width, int height)
	{
		this->width = width;
		this->height = height;

		InitializeSDLImage();
		InitializeSDLWindow();
	}

	Window::~Window(void)
	{
		TerminateSDLImage();
		DestroySDLWindow();
	}

	void Window::SetSDLWindow(SDL_Window& window)
	{

	}

	SDL_Window* Window::GetSDLWindow(void)
	{
		return sDLWindow;
	}

	void Window::InitializeSDLImage(void)
	{
		IMG_Init(IMG_INIT_PNG);
	}

	void Window::TerminateSDLImage(void)
	{
		IMG_Quit();
	}

	// TODO - Consume window title field
	void Window::InitializeSDLWindow(void)
	{
		sDLWindow = SDL_CreateWindow(
			"Test window",
			SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED,
			width,
			height,
			0
		);
	}

	void Window::DestroySDLWindow(void)
	{
		SDL_DestroyWindow(sDLWindow);
	}
}