#ifndef Sprite_h
	#define Sprite_h
	#include "Sprite.h"
#endif

#ifndef std_string
	#define std_string
	#include <string>
#endif

namespace Drop
{
	Sprite::Sprite(std::string textureName, int texturePositionX, int texturePositionY, int width, int height)
	{
		this->textureName = textureName;
		this->positionX = texturePositionX;
		this->positionY = texturePositionY;
		this->width = width;
		this->height = height;
	}

	std::string Sprite::GetTextureName(void)
	{
		return textureName;
	}

	int Sprite::GetPositionX(void)
	{
		return positionX;
	}

	int Sprite::GetPositionY(void)
	{
		return positionY;
	}

	int Sprite::GetWidth(void)
	{
		return width;
	}

	int Sprite::GetHeight(void)
	{
		return height;
	}
}