#ifndef std_string
	#define std_string
	#include <string>
#endif

namespace Drop
{
	class Sprite
	{
	public:
		Sprite(std::string source, int x, int y, int width, int height);

		std::string Source;

		int X;

		int Y;

		int Width;

		int Height;
	};
}