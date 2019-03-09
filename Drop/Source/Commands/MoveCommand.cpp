#ifndef MoveCommand_h
	#define MoveCommand_h
	#include "Commands/MoveCommand.h"
#endif

#ifndef Event_h
	#define Event_h
	#include "Events/Event.h"
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
	// Public
	MoveCommand::MoveCommand(void)
	{}

	MoveCommand::~MoveCommand(void)
	{}

	Drop::Event* MoveCommand::Execute(void)
	{
		// TODO - Validate new position.

		Drop::Position* newPosition = GetNewInitiatorPosition(MoveDirection);

		OldPosition = Initiator->Position;
		Initiator->Position = newPosition;

		return new Drop::EntityMovedEvent(*Initiator, OldPosition);
	}

	// Private
	Drop::Position* MoveCommand::GetNewInitiatorPosition(Drop::MoveDirection moveDirection)
	{
		int newXPosition = Initiator->Position->X;
		switch (moveDirection)
		{
			case Drop::MoveDirection::NorthEast:
			case Drop::MoveDirection::East:
			case Drop::MoveDirection::SouthEast:
				newXPosition += 1;
				break;
			case Drop::MoveDirection::SouthWest:
			case Drop::MoveDirection::West:
			case Drop::MoveDirection::NorthWest:
				newXPosition += -1;
				break;
		}

		int newYPosition = Initiator->Position->Y;
		switch (moveDirection)
		{
			case Drop::MoveDirection::SouthEast:
			case Drop::MoveDirection::South:
			case Drop::MoveDirection::SouthWest:
				newYPosition += 1;
				break;
			case Drop::MoveDirection::NorthWest:
			case Drop::MoveDirection::North:
			case Drop::MoveDirection::NorthEast:
				newYPosition += -1;
				break;
		}

		return new Drop::Position(newXPosition, newYPosition);
	}
}