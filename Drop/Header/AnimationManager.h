#ifndef IProcessEvents_h
	#define IProcessEvents_h
	#include "IProcessEvents.h"
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

namespace Drop
{
	class AnimationManager : Drop::IProcessEvents
	{
	public:
		AnimationManager(Drop::Renderer& renderer);

		~AnimationManager(void);

		void IProcessEvents::ProcessEvent(Drop::Event* userInput);

	private:
		Drop::Renderer& renderer;
	};
}