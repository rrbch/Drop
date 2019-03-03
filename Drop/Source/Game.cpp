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

	void Game::Start(void)
	{
		SDL_Event currentEvent;
		while (true)
		{
			if (SDL_PollEvent(&currentEvent) == 0)
			{
				continue;
			}

			viewContextManager->activeViewContext->HandleEvent(currentEvent);
		}
	}

	void Game::QueueEvent(Drop::Event* event)
	{
		eventQueue->push(event);
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

		viewContextManager = new Drop::ViewContextManager(*this);
		animationManager = new Drop::AnimationManager(*renderer);
	}

	void Game::DeleteFields(void)
	{
		delete(eventQueue);

		delete(window);
		delete(renderer);

		delete(viewContextManager);
		delete(animationManager);
	}

	void Game::ForwardEvents(void)
	{
		Drop::Event* currentEvent = eventQueue->front();
		while (currentEvent != nullptr)
		{
			for (std::deque<Drop::IProcessEvents>::iterator eventProcessor = eventProcessors->begin();
				eventProcessor != eventProcessors->end();)
			{
				eventProcessor->ProcessEvent(currentEvent);

				++eventProcessor;
			}
	
			eventQueue->pop();
			currentEvent = eventQueue->front();
		}
	}
}