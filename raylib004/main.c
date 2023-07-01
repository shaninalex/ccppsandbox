#include <time.h>
#include "raylib.h"

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"


int main()
{
    const int screenWidth = 690;
    const int screenHeight = 560;

    InitWindow(screenWidth, screenHeight, "raygui - controls test suite");
    SetExitKey(0);

    char textBoxText[40] = "";
    bool textBoxEditMode = false;
    char textBoxText2[150] = "";
    bool textBoxEditMode2 = false;
    Vector2 mousePoint = {0.0f, 0.0f};

    char buttonText[6] = "submit";
    Rectangle buttonBound = {10, 90, 100, 30};
    bool exitWindow = false;
    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main loop
    while (!exitWindow)
    {
        exitWindow = WindowShouldClose();
        mousePoint = GetMousePosition();

        if (CheckCollisionPointRec(mousePoint, buttonBound))
        {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) 
            {
                // create note and add it to the notes list (linked-list, vector ... )
            }
        }
        GuiButton(buttonBound, buttonText);

        BeginDrawing();

        ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

        GuiSetStyle(TEXTBOX, TEXT_ALIGNMENT, TEXT_ALIGN_LEFT);

        if (GuiTextBox((Rectangle){10, 10, 300, 30}, textBoxText, 64, textBoxEditMode))
            textBoxEditMode = !textBoxEditMode;

        if (GuiTextBox((Rectangle){10, 50, 300, 30}, textBoxText2, 64, textBoxEditMode2))
            textBoxEditMode2 = !textBoxEditMode2;

        EndDrawing();
    }
    CloseWindow();

    return 0;
}

