#ifndef Position_h
	#define Position_h
	#include "Components/Position.h"
#endif

namespace Drop
{
	Position::Position(int x, int y)
	{
		TexturePositionX = x;
		TexturePositionY = y;
	}

	Position::~Position(void)
	{}
}