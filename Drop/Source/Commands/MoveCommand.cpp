#ifndef MoveCommand_h
	#define MoveCommand_h
	#include "Commands/MoveCommand.h"
#endif

#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
#endif

namespace Drop
{
	MoveCommand::MoveCommand()
	{}

	MoveCommand::~MoveCommand()
	{}

	Drop::Event* MoveCommand::Execute()
	{
		auto entityMovedEvent = new EntityMovedEvent(*Initiator, *NewPosition);
		
		// TODO - Validate new position.

		return entityMovedEvent;
	}
}