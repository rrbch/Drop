#ifndef Position_h
	#define Position_h
	#include "Components/Position.h"
#endif

namespace Drop
{
	// Public
	Position::Position(int x, int y)
	{
		X = x;
		Y = y;
	}

	Position::~Position(void)
	{}

	int Position::GetX(void)
	{
		return X;
	}

	int Position::GetY(void)
	{
		return Y;
	}
}