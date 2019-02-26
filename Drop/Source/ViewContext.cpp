#ifndef ViewContext_h
	#define ViewContext_h
	#include "ViewContext.h"
#endif

namespace Drop
{
	ViewContext::ViewContext(std::queue<Drop::Event>& eventQueue) : eventQueue(eventQueue)
	{}
}