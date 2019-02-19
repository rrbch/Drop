#ifndef ViewContextManager_h
	#define ViewContextManager_h
	#include "ViewContextManager.h"
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

	void ViewContextManager::ChangeViewContext(ViewContextType viewContextType)
	{
		switch (viewContextType)
		{
			case ViewContextType::Exploration:
			{
				activeViewContext = explorationViewContext;
				break;
			}
		}
	}
}