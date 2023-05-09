#include "raylib.h"
#include "unit.h"

int main() {
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Raylib003");
    SetTargetFPS(60);

    Unit unit = Unit(50, 50, 100, 100, GREEN);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            unit.move(GetMouseX(), GetMouseY());
        }

        DrawText("Hello", screenWidth / 2, screenHeight / 2, 2, GREEN);
        unit.draw();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
