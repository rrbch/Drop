#ifndef SDL_h
	#define SDL_h
	#include <SDL.h>
#endif

#ifndef Game_h
	#define Game_h
	#include "Game.h"
#endif

#ifndef Rectangle_h
	#define Rectangle_h
	#include "Rectangle.h"
#endif

#ifndef std_iostream
	#define std_iostream
	#include <iostream>
#endif

namespace Drop
{
	// Public
	Game::Game(void)
	{
		InitializeSDL();
		InitializeFields();
	}

	Game::~Game(void)
	{
		TerminateSDL();
		DeleteFields();
	}

	void Game::Run(void)
	{
		int secondStart = 0;

		SDL_Event currentEvent;
		while (true)
		{
			// TODO - Move fps display logic
			if ((SDL_GetTicks() - secondStart) >= 1000 )
			{
				std::cout << frameManager->GetFramesPerSecond() << std::endl;
				secondStart = SDL_GetTicks();
			}

			frameManager->StartNewFrame();

			if (SDL_PollEvent(&currentEvent) == 0)
			{
				continue;
			}

			viewContextManager->activeViewContext->HandleEvent(currentEvent);

			ForwardEvents();
		}
	}

	void Game::QueueEvent(Drop::Event* event)
	{
		if (event != nullptr)
		{
			eventQueue->push(event);
		}
	}

	// Private
	void Game::InitializeSDL(void)
	{
		SDL_Init(SDL_INIT_VIDEO);
	}

	void Game::TerminateSDL(void)
	{
		SDL_Quit();
	}

	void Game::InitializeFields(void)
	{
		eventQueue = new std::queue<Event*>();

		window = new Drop::Window(640, 480, "Drop 0.1");
		renderer = new Drop::Renderer(window->GetSDLWindow());

		frameManager = new Drop::FrameManager(60);
		viewContextManager = new Drop::ViewContextManager(*this);
		animationManager = new Drop::AnimationManager(*renderer);

		eventProcessors = new std::deque<Drop::IProcessEvents*>();
		eventProcessors->push_front(viewContextManager);
		eventProcessors->push_front(animationManager);
	}

	void Game::DeleteFields(void)
	{
		delete(eventQueue);

		delete(window);
		delete(renderer);

		delete(viewContextManager);
		delete(animationManager);
		delete(eventProcessors);
	}

	void Game::ForwardEvents(void)
	{
		if (eventQueue->size() == 0)
		{
			return;
		}

		Drop::Event* currentEvent;
		while (eventQueue->size() != 0)
		{
			currentEvent = eventQueue->front();

			for (std::deque<Drop::IProcessEvents*>::iterator eventProcessor = eventProcessors->begin();
				eventProcessor != eventProcessors->end();
				eventProcessor++)
			{
				(*eventProcessor)->ProcessEvent(currentEvent);
			}

			delete(currentEvent);

			eventQueue->pop();
		}
	}
}