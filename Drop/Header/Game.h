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

namespace Drop
{
	class Game
	{
	public:
		Game(void);

		~Game(void);

		void Start(void);

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