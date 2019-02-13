#ifndef Window_h
	#define Window_h
	#include "Window.h"
#endif

namespace Drop
{	
	// Public
	Window::Window(int width, int height, std::string title)
	{
		this->width = width;
		this->height = height;
		this->title = title;

		InitializeSDLWindow();
	}

	Window::~Window(void)
	{
		DestroySDLWindow();
	}

	SDL_Window* Window::GetSDLWindow(void)
	{
		return sDLWindow;
	}

	// Private
	void Window::InitializeSDLWindow(void)
	{
		sDLWindow = SDL_CreateWindow(
			title.c_str(),
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