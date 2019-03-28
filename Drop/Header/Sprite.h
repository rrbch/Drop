#ifndef std_string
	#define std_string
	#include <string>
#endif

namespace Drop
{
	class Sprite
	{
	public:
		Sprite(std::string textureName, int texturePositionX, int texturePositionY, int width, int height);

		std::string TextureName;

		int TexturePositionX;

		int TexturePositionY;

		int Width;

		int Height;
	};
}