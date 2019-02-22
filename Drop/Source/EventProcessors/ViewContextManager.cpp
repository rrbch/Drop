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
	ViewContextManager::ViewContextManager(Drop::Renderer* renderer)
	{
		explorationViewContext = new Drop::ExplorationViewContext(renderer);
		activeViewContext = explorationViewContext;
	}

	ViewContextManager::~ViewContextManager(void)
	{
		delete(explorationViewContext);
	}

	void ViewContextManager::ProcessEvent(Drop::Event* eventToProcess)
	{
		ViewContextChangeEvent* viewContextChangeEvent = dynamic_cast<ViewContextChangeEvent*>(eventToProcess);
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