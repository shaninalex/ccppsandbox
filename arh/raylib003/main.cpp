#include "raylib.h"
#include "selectionbox.h"
#include "unit.h"
#include <iostream>

int main() {
    const int screenWidth = 640;
    const int screenHeight = 480;

    InitWindow(screenWidth, screenHeight, "Raylib003");
    SetTargetFPS(60);
    SelectionBox selectionbox = SelectionBox();

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
            selectionbox.startSelection(GetMouseX(), GetMouseY());
            selectionbox.setSelection(true);
        }

        if (IsMouseButtonUp(MOUSE_BUTTON_LEFT)) {
            selectionbox.setSelection(false);
        }

        if (selectionbox.isSelecting()) {
            selectionbox.draw(GetMouseX(), GetMouseY());
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
