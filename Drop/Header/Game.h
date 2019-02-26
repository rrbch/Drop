#ifndef std_queue
	#define std_queue
	#include <queue>
#endif

#ifndef std_forward_list
	#define std_forward_list
	#include <forward_list>
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
	#include "ViewContextManager.h"
#endif

#ifndef AnimationManager_h
	#define AnimationManager_h
	#include "AnimationManager.h"
#endif

namespace Drop
{
	class Game
	{
	public:
		Game(void);

		~Game(void);

		void Start(void);

	private:
		std::queue<Event>* eventQueue;

		std::deque<IProcessEvents>* eventProcessors;

		Drop::Window* window;
		
		Drop::Renderer* renderer;
		
		Drop::ViewContextManager* viewContextManager;

		Drop::AnimationManager* animationManager;

		void InitializeSDL(void);

		void TerminateSDL(void);

		void InitializeFields(void);

		void DeleteFields(void);

		void ForwardEvents(void);
	};
}