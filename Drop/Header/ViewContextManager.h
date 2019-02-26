#ifndef IProcessEvents_h
	#define IProcessEvents_h
	#include "IProcessEvents.h"
#endif

#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

#ifndef ExplorationViewContext_h
	#define ExplorationViewContext_h
	#include "ExplorationViewContext.h"
#endif

namespace Drop
{
	class ViewContextManager : Drop::IProcessEvents
	{
	public:
		ViewContextManager(std::queue<Drop::Event>& eventQueue);
		
		~ViewContextManager(void);

		ViewContext* activeViewContext;

		void IProcessEvents::ProcessEvent(Drop::Event* userInput);

	private:
		Drop::ExplorationViewContext* explorationViewContext;
	};
}