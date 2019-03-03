#ifndef ViewContextChangeEvent_h
	#define ViewContextChangeEvent_h
	#include "Events/ViewContextChangeEvent.h"
#endif

namespace Drop
{
	ViewContextChangeEvent::ViewContextChangeEvent(Drop::Entity& initiator, ViewContextType newViewContextType) : NewViewContextType(newViewContextType), 
		Drop::Event(initiator)
	{}

	ViewContextChangeEvent::~ViewContextChangeEvent()
	{}
}