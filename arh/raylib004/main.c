#include "raylib.h"
#include <time.h>

#define RAYGUI_IMPLEMENTATION
#include "notesList.h"
#include "raygui.h"


typedef struct MenuItem
{
    const char* text;
    // Add additional properties as needed
} MenuItem;


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

    // notes menu
    MenuItem* menuItems = NULL;
    int itemCount = 0;
    int selectedItem = -1;
    bool menubox_active = false;

    // dialog before show
    bool showMessageBox = false;

    SetTargetFPS(60);
    //--------------------------------------------------------------------------------------

    // Main loop
    while (!exitWindow)
    {
        exitWindow = WindowShouldClose();
        mousePoint = GetMousePosition();

        if (IsKeyPressed(KEY_ESCAPE)) showMessageBox = !showMessageBox;

        if (CheckCollisionPointRec(mousePoint, buttonBound))
        {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            {
                // add(list, textBoxText, textBoxText2);
            }
        }
        GuiButton(buttonBound, buttonText);

        BeginDrawing();

        ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));

        GuiSetStyle(TEXTBOX, TEXT_ALIGNMENT, TEXT_ALIGN_LEFT);
        GuiSetStyle(LISTVIEW, TEXT_ALIGNMENT, TEXT_ALIGN_LEFT);

        // Draw the menu list

        selectedItem = GuiListViewEx((Rectangle){ 100, 100, 200, 300 }, menuItems, itemCount, &selectedItem, true, true);
        
        // Draw the selected item (example)
        if (selectedItem >= 0)
        {
            DrawText(menuItems[selectedItem].text, 350, 100, 20, BLACK);
        }

        if (GuiTextBox((Rectangle){10, 10, 300, 30}, textBoxText, 64, textBoxEditMode))
            textBoxEditMode = !textBoxEditMode;

        if (GuiTextBox((Rectangle){10, 50, 300, 30}, textBoxText2, 64, textBoxEditMode2))
            textBoxEditMode2 = !textBoxEditMode2;

        if (showMessageBox)
        {
            DrawRectangle(0, 0, GetScreenWidth(), GetScreenHeight(), Fade(RAYWHITE, 0.8f));
            int result = GuiMessageBox((Rectangle){(float)GetScreenWidth() / 2 - 125, (float)GetScreenHeight() / 2 - 50, 250, 100}, GuiIconText(ICON_EXIT, "Close Window"), "Do you really want to exit?", "Yes;No");

            if ((result == 0) || (result == 2))
                showMessageBox = false;
            else if (result == 1)
                exitWindow = true;
        }

        EndDrawing();
    }
    CloseWindow();

    return 0;
}
