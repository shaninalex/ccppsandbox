#include "raylib.h"

int
main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(
      screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);
    Vector2 ballPosition = { screenWidth / 2 + 40.0f,
                             screenHeight / 2 + 40.0f };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        // DrawText("Congrats! You created your first window!", 190, 200, 20,
        //          LIGHTGRAY);
        DrawRectangle(ballPosition.x, ballPosition.y, 80, 80, MAROON);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
