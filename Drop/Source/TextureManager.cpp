#ifndef std_map
	#define std_map
	#include <map>
#endif

#ifndef std_string
	#define std_string
	#include <string>
#endif

#ifndef SDL_image_h
	#define SDL_image_h
	#include <SDL_image.h>
#endif

#ifndef TextureManager_h
	#define TextureManager_h
	#include "TextureManager.h"
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

namespace Drop
{
	// Public
	TextureManager::TextureManager(void)
	{
		sDLTextures = new std::map<std::string, SDL_Texture*>();
	}

	TextureManager::~TextureManager(void)
	{
		DestroySDLTextures(sDLTextures);
		delete(sDLTextures);
	}

	SDL_Texture* TextureManager::GetTexture(Drop::Renderer* renderer, std::string textureName)
	{
		// TODO - Validate texture name and handle missing textures.

		SDL_Texture* texture = TryFindTexture(renderer, textureName);
		AddSDLTexture(sDLTextures, textureName, texture);

		return texture;
	}

	// Private
	void TextureManager::DestroySDLTextures(std::map<std::string, SDL_Texture*>* sDLTextures)
	{
		for (auto& keySDLTexturePair : *sDLTextures)
		{
			SDL_DestroyTexture(keySDLTexturePair.second);
		}
	}

	SDL_Texture* TextureManager::TryFindTexture(Drop::Renderer* renderer, std::string textureName)
	{
		return IMG_LoadTexture(renderer->SDLRenderer, textureName.c_str());
	}

	void TextureManager::AddSDLTexture(std::map<std::string, SDL_Texture*>* sDLTextures, std::string textureName, SDL_Texture* sDLTextureToAdd)
	{
		auto textureNameTexturePair = std::pair<std::string, SDL_Texture*>(textureName, sDLTextureToAdd);
		sDLTextures->insert(textureNameTexturePair);
	}
}