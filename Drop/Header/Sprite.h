#ifndef std_string
	#define std_string
	#include <string>
#endif

namespace Drop
{
	struct Sprite
	{
	public:
		Sprite(std::string textureName, int texturePositionX, int texturePositionY, int width, int height);

		std::string GetTextureName(void);

		int GetPositionX(void);

		int GetPositionY(void);

		int GetWidth(void);

		int GetHeight(void);

	private:
		std::string textureName;

		int positionX;

		int positionY;

		int width;

		int height;
	};
}