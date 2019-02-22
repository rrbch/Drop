#ifndef Event_h
	#define Event_h
	#include "Event.h"
#endif

namespace Drop
{
	enum ViewContextType
	{
		Exploration = 0
	};

	class ViewContextChangeEvent : Drop::Event
	{
	public:
		ViewContextChangeEvent(const Drop::Entity* initiator, ViewContextType newViewContextType);

		~ViewContextChangeEvent();

		const ViewContextType NewViewContextType;
	};
}