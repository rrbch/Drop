#ifndef Position_h
	#define Position_h
	#include "Components/Position.h"
#endif

namespace Drop
{
	Position::Position(int x, int y)
	{
		X = x;
		Y = y;
	}

	Position::~Position(void)
	{}
}