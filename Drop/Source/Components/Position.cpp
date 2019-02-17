#ifndef Position_h
	#define Position_h
	#include "Components/Position.h"
#endif

namespace Drop
{
	Position::Position(int positionX, int positionY)
	{
		PositionX = positionX;
		PositionY = positionY;
	}

	Position::~Position(void)
	{}
}