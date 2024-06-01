#include "app.h"
#include "environment/environment.h"
#include "raylib.h"
#include <stdio.h>

#include "ui/ui.h"

App::App(const std::string &title)
    : screenWidth(800), screenHeight(450), windowTitle(title), ui(),
      environment() {
    printf("Initialize application...\n");
}

App::~App() {
    CloseWindow();
    printf("remove app resources\n");
}

void App::run() {
    InitWindow(screenWidth, screenHeight, windowTitle.c_str());
    SetTargetFPS(60); // Set our game to run at 60 frames-per-second

    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        updates();
        drawing();
    }
}

void App::updates() {
    //----------------------------------------------------------------------------------
    // Update your variables here
    //----------------------------------------------------------------------------------
}

void App::drawing() {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    DrawText("Congrats! You created your first window!", 190, 200, 20,
             LIGHTGRAY);

    ui.render();
    environment.draw();

    EndDrawing();
}
