
#pragma once

#include <iostream>
#include <cstdint>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

class Scene
{

    public:

        Scene(uint32_t focal_length);

    private:

        uint32_t focal_length;


};