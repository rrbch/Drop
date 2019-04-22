#ifndef CppUnitTest_h
	#define CppUnitTest_h
	#include "CppUnitTest.h"
#endif

#ifndef SDL_image_h
	#define SDL_image_h
	#include <SDL_image.h>
#endif

#ifndef TextureManager_h
	#define TextureManager_h
	#include <TextureManager.h>
#endif

#ifndef Window_h
	#define Window_h
	#include <Window.h>
#endif

#ifndef Renderer_h
	#define Renderer_h
	#include <Renderer.h>
#endif

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Drop_UnitTests
{
	TEST_CLASS(TextureManagerTests)
	{
	public:
		TEST_METHOD(Constructor)
		{
			Drop::TextureManager();
		}

		TEST_METHOD(GetTexture_ValidTextureName)
		{
			Drop::Window* window = new Drop::Window(0, 0, "");
			Drop::Renderer* renderer = new Drop::Renderer(window->SDLWindow);

			auto textureManager = Drop::TextureManager();
			SDL_Texture* texture = textureManager.GetTexture(renderer, "B:\\Source\\repos\\Drop\\Drop\\Resources\\RogueYun_SimpleMood_tileset.png");

			SDL_DestroyTexture(texture);
		}
	};
}