#ifndef std_queue
	#define std_queue
	#include <queue>
#endif

#ifndef ViewContextManager_h
	#define ViewContextManager_h
	#include "EventProcessors/ViewContextManager.h"
#endif

#ifndef ViewContextChangeEvent_h
	#define ViewContextChangeEvent_h
	#include "Events/ViewContextChangeEvent.h"
#endif

#ifndef Event_h
	#define Event_h
	#include "Events/Events.h"
#endif

#ifndef ViewContextChangeEvent_h
	#define ViewContextChangeEvent_h
	#include "Events/ViewContextChangeEvent.h"
#endif

namespace Drop
{
	// Public
	ViewContextManager::ViewContextManager(std::queue<Drop::Event>& eventQueue, Drop::Renderer& renderer)
	{
		explorationViewContext = new Drop::ExplorationViewContext(eventQueue, renderer);
		activeViewContext = explorationViewContext;
	}

	ViewContextManager::~ViewContextManager(void)
	{
		delete(explorationViewContext);
	}

	void ViewContextManager::ProcessEvent(Drop::Event* userInput)
	{
		ViewContextChangeEvent* viewContextChangeEvent = dynamic_cast<ViewContextChangeEvent*>(userInput);
		if (viewContextChangeEvent == nullptr)
		{
			return;
		}

		switch (viewContextChangeEvent->NewViewContextType)
		{
			case ViewContextType::Exploration:
			{
				activeViewContext = explorationViewContext;
				break;
			}
		}
	}
}