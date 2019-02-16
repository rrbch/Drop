#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif


namespace Drop
{
	class ExplorationViewContext : public Drop::ViewContext
	{
	public:
		void HandleUserInput(void) override;
	};
}