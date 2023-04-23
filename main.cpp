#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, char* argv[]) {
    SDL_Window* window = nullptr;
    
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "SDL could not be initialized: " << SDL_GetError();
    } else {
        std::cout << "SDL video system is ready to go\n";
    }

    window = SDL_CreateWindow(
        "C++ SDL2 Window", 
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        640, 480,
        SDL_WINDOW_SHOWN);

    // Main application loop
    bool gameIsRunning = true;
    while(gameIsRunning) {
        SDL_Event event;

        // start our event loop
        while (SDL_PollEvent(&event)) {
            // handle each specific event
            if ( event.type == SDL_QUIT ) {
                gameIsRunning = false;
            }

            if ( event.type == SDL_MOUSEMOTION ) {
                std::cout << "Mouse has been moved\n";
            }

            if ( event.type == SDL_KEYDOWN ) {
                std::cout << "a key has been pressed\n";
                if ( event.key.keysym.sym == SDLK_0) {
                    std::cout << "zero was pressed\n";
                } else {
                    std::cout << "zero was not pressed\n";
                } 
            }

            const Uint8* state = SDL_GetKeyboardState(NULL);
            if (state[SDL_SCANCODE_RIGHT]) {
                std::cout << "right arrow key was pressed\n";
            }
        }
    }


    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
