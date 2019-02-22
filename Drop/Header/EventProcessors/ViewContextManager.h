#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

#ifndef IProcessEvents_h
	#define IProcessEvents_h
	#include "IProcessEvents.h"
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
		ViewContextManager(Drop::Renderer* renderer);
		
		~ViewContextManager(void);

		ViewContext* activeViewContext;

		void ProcessEvent(Drop::Event* eventToProcess);

	private:
		Drop::ExplorationViewContext* explorationViewContext;
	};
}