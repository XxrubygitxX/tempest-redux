


#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <iostream>
#include <cstdint>


class IAC
{

    public:

        IAC(uint32_t width = 800, uint32_t height = 600, const char* title = "IAC");
        ~IAC();

        bool Initialize();// Initialize the engine
        void start();  // Start the main loop
        void quit();  // Clean up SDL and quit
        void update();
        void setup();
    
    private:
    
        SDL_Window* window;
        SDL_Renderer* renderer;
        const char* title;

        uint32_t* pixels;

        bool running;
        uint32_t width, height;

        void process_input();  // Handle user input
        void render();  // Render the scene
        void cleanup();  // Clean up SDL resources
};

