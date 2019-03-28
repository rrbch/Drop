#ifndef Sprite_h
	#define Sprite_h
	#include "Sprite.h"
#endif

namespace Drop
{
	Sprite::Sprite(std::string textureName, int texturePositionX, int texturePositionY, int width, int height)
	{
		TextureName = textureName;
		TexturePositionX = texturePositionX;
		TexturePositionY = texturePositionY;
		Width = width;
		Height = height;
	}
}