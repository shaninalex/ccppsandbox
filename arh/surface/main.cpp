#include <SDL2/SDL.h>
#include <SDL2/SDL_mouse.h>
#include <SDL2/SDL_stdinc.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_video.h>
#include <cstdint>
#include <iostream>

void SetPixel(SDL_Surface *surface, int x, int y, uint8_t r, uint8_t g,
              uint8_t b) {
    SDL_LockSurface(surface);
    std::cout << "Left btn was clicked (" << x << "," << y << ")\n";
    uint8_t *pixelArray = (uint8_t *)surface->pixels;
    pixelArray[y * surface->pitch + x * surface->format->BytesPerPixel + 0] = g;
    pixelArray[y * surface->pitch + x * surface->format->BytesPerPixel + 1] = b;
    pixelArray[y * surface->pitch + x * surface->format->BytesPerPixel + 2] = r;

    SDL_UnlockSurface(surface);
}

int main(int argc, char *argv[]) {
    SDL_Window *window = nullptr;

    // Grab the window surface
    SDL_Surface *screen;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not be initialized: " << SDL_GetError();
    } else {
        std::cout << "SDL video system is ready to go\n";
    }

    window = SDL_CreateWindow("C++ SDL2 Window", SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED, 640, 480,
                              SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);

    screen = SDL_GetWindowSurface(window);

    // Main application loop
    bool gameIsRunning = true;
    while (gameIsRunning) {
        SDL_Event event;

        int x, y;
        Uint32 buttons;
        buttons = SDL_GetMouseState(&x, &y);

        // start our event loop
        while (SDL_PollEvent(&event)) {
            // handle each specific event
            if (event.type == SDL_QUIT) {
                gameIsRunning = false;
            }

            if (event.button.button == SDL_BUTTON_LEFT) {
                SetPixel(screen, x, y, 255, 0, 0);
            }
            if (event.button.button == SDL_BUTTON_RIGHT) {
                SetPixel(screen, x, y, 0, 0, 255);
            }
        }
        SDL_UpdateWindowSurface(window);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
