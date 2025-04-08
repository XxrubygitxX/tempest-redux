
#pragma once

#include "primitives.h"
#include <iostream>
#include <cstdint>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

///////////////////////////////////////////////////////////////
//  point.h - Main definition of the Point class
///////////////////////////////////////////////////////////////

class Point
{
    public:
        
        Vector3 position;

        Point(Vector3 position);

};