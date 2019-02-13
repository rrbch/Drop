#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

namespace Drop
{
	enum ViewContextType
	{
		CombatViewContext = 0
	};

	class Game
	{
	public:
		Game(void);

		~Game(void);

	private:
		Drop::ViewContext& activeViewContext;

		void InitializeSDL(void);

		void TerminateSDL(void);

		void ChangeViewContext(ViewContextType viewContextType);
	};
}