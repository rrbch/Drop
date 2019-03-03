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
		ViewContextChangeEvent(Drop::Entity& initiator, ViewContextType newViewContextType);

		~ViewContextChangeEvent(void);

		const ViewContextType NewViewContextType;
	};
}