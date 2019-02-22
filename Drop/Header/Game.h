#ifndef std_queue
	#define std_queue
	#include <queue>
#endif

#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
#endif

#ifndef Window_h
	#define Window_h
	#include "Window.h"
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

#ifndef ViewContextManager_h
	#define ViewContextManager_h
	#include "EventProcessors/ViewContextManager.h"
#endif

namespace Drop
{
	class Game
	{
	public:
		Game(void);

		~Game(void);

		void Start(void);

		std::queue<Event>* EventQueue;

	private:
		Drop::Window* window;
		
		Drop::Renderer* renderer;
		
		Drop::ViewContextManager* viewContextManager;

		void InitializeSDL(void);

		void TerminateSDL(void);

		void InitializeFields(void);

		void DeleteFields(void);
	};
}