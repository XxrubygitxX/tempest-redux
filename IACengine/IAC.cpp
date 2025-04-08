


#include "IAC.h"
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>

IAC::IAC(uint32_t width,
         uint32_t height,
         const char* title)
{
    this->title = title;
    this->window = nullptr;
    this->renderer = nullptr;
    this->running = false;
    this->width = width;
    this->height = height;
}

IAC::~IAC()
{
    this->quit();
}

bool IAC::Initialize()
{
    ////////////////////////////////////////////////////////////
    // Initialize and check for SDL
    ////////////////////////////////////////////////////////////

    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    window = SDL_CreateWindow(this->title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, this->width, this->height, SDL_WINDOW_SHOWN);
    if (window == nullptr)
    {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr)
    {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    this->pixels = new uint32_t[this->width * this->height];

    

    return true;
}

void IAC::start()
{
    this->running = true;

    while (running)
    {
        process_input();
        update();
        render();
        SDL_Delay(16);
    }
}

void IAC::quit()
{
    this->running = false;
    cleanup();
}

void IAC::process_input()
{
    SDL_Event event;
    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            this->quit();
        }
    }
}

void IAC::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    // Render your scene here

    SDL_RenderPresent(renderer);
}
void IAC::cleanup()
{

    delete[] this->pixels;

    if (renderer)
    {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
    if (window)
    {
        SDL_DestroyWindow(window);
        window = nullptr;
    }
    SDL_Quit();
}

