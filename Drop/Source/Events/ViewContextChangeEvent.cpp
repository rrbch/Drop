#ifndef ViewContextChangeEvent_h
	#define ViewContextChangeEvent_h
	#include "Events/ViewContextChangeEvent.h"
#endif

namespace Drop
{
	ViewContextChangeEvent::ViewContextChangeEvent(const Drop::Entity& initiator, const ViewContextType newViewContextType) : NewViewContextType(newViewContextType), 
		Drop::Event(initiator)
	{}

	ViewContextChangeEvent::~ViewContextChangeEvent()
	{}
}