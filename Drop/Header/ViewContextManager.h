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
	enum ViewContextType
	{
		Exploration = 0
	};

	class ViewContextManager
	{
	public:
		ViewContextManager(void);
		
		~ViewContextManager(void);

		void ChangeViewContext(Drop::ViewContextType viewContextType);

		ViewContext& activeViewContext;

	private:
		Drop::ExplorationViewContext& explorationViewContext;
	};
}