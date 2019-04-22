#ifndef SDL_image_h
	#define SDL_image_h
	#include <SDL_image.h>
#endif

#ifndef std_string
	#define std_string
	#include <string>
#endif

#ifndef std_map
	#define std_map
	#include <map>
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include "Renderer.h"
#endif

namespace Drop
{
	class TextureManager
	{
	public:
		TextureManager(void);

		~TextureManager(void);	

		SDL_Texture* GetTexture(Drop::Renderer* renderer, std::string textureName);

	private:
		std::map<std::string, SDL_Texture*>* sDLTextures;

		void DestroySDLTextures(std::map<std::string, SDL_Texture*>* sDLTextures);

		bool ContainsTexture(std::map<std::string, SDL_Texture*>* sDLTextures, std::string textureName);

		SDL_Texture* TryFindTexture(Drop::Renderer* renderer, std::string textureName);

		void AddSDLTexture(std::map<std::string, SDL_Texture*>* sDLTextures, std::string textureName, SDL_Texture* sDLTextureToAdd);
	};
}