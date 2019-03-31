#ifndef std_string
	#define std_string
	#include <string>
#endif

#ifndef Point_h
	#define Point_h
	#include "Point.h"
#endif

namespace Drop
{
	struct Sprite
	{
	public:
		Sprite(std::string textureName, Drop::Point* position, int width, int height);

		~Sprite(void);

		const std::string TextureName;

		Drop::Point* Position;

		int Width;

		int Height;
	};
}