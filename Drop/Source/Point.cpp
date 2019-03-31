#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

namespace Drop
{
	// Public
	Point::Point(void)
	{
		X = 0;
		Y = 0;
	}

	Point::Point(int x, int y)
	{
		X = x;
		Y = y;
	}

	Point::~Point(void)
	{}
}