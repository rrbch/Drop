#ifndef Command_h
	#define Command_h
	#include "Commands/Command.h"
#endif

#ifndef Event_h
	#define Event_h
	#include "Event.h"
#endif

#ifndef Position_h
	#define Position_h
	#include "Position.h"
#endif

#ifndef EntityMovedEvent_h
	#define EntityMovedEvent_h
	#include "Events/EntityMovedEvent.h"
#endif

namespace Drop
{
	class MoveCommand : public Drop::Command
	{
	public:
		MoveCommand();

		~MoveCommand();

		Drop::Entity* Initiator;

		Drop::Position* NewPosition;

		Drop::Event* Command::Execute(void);
	};
}