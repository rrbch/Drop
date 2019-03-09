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

namespace Drop
{
	enum MoveDirection
	{
		Undefined = 0,
		North = 1,
		NorthEast = 2,
		East = 3,
		SouthEast = 4,
		South = 5,
		SouthWest = 6,
		West = 7,
		NorthWest = 8,
	};

	class MoveCommand : public Drop::Command
	{
	public:
		MoveCommand(void);

		~MoveCommand(void);

		Drop::Entity* Initiator;

		Drop::MoveDirection MoveDirection;

		Drop::Position* OldPosition;

		Drop::Event* Command::Execute(void);

	private:
		Drop::Position* GetNewInitiatorPosition(Drop::MoveDirection moveDirection);
	};
}