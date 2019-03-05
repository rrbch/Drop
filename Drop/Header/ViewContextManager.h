#ifndef IProcessEvents_h
	#define IProcessEvents_h
	#include "IProcessEvents.h"
#endif

#ifndef IQueueEvents_h
	#define IQueueEvents_h
	#include "IQueueEvents.h"
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
	class ViewContextManager : public Drop::IProcessEvents
	{
	public:
		ViewContextManager(Drop::IQueueEvents& iQueueEvents);
		
		~ViewContextManager(void);

		ViewContext* activeViewContext;

		void IProcessEvents::ProcessEvent(Drop::Event* userInput);

	private:
		Drop::ExplorationViewContext* explorationViewContext;
	};
}