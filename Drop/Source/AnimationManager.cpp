#ifndef AnimationManager_h
	#define AnimationManager_h
	#include "AnimationManager.h"
#endif

#ifndef Renderer_h	
	#define Renderer_h	
	#include "Renderer.h"
#endif

#ifndef EntityMovedEvent_h
	#define EntityMovedEvent_h
	#include "Events/EntityMovedEvent.h"
#endif

namespace Drop
{
	// Public
	AnimationManager::AnimationManager(Drop::Renderer& renderer) : renderer(renderer)
	{
		renderer.LoadTexture("B:\\Source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png");

		renderer.SetDrawColor(0, 0, 0, 0);
		renderer.Present();
	}

	AnimationManager::~AnimationManager(void)
	{}

	void AnimationManager::ProcessEvent(Drop::Event* userInput)
	{
		EntityMovedEvent* entityMovedEvent = dynamic_cast<EntityMovedEvent*>(userInput);
		if (entityMovedEvent == nullptr)
		{
			return;
		}

		renderer.DrawSprite(*entityMovedEvent->Initiator.Sprite, *entityMovedEvent->Initiator.Position);
	}
}