#include "selectionbox.h"
#include "raylib.h"
#include <iostream>

SelectionBox::SelectionBox() {
    startX = 0;
    startY = 0;
}

bool SelectionBox::isSelecting() { return selecting; }

void SelectionBox::startSelection(int x, int y) {
    if (!startX && !startY) {
        startX = x;
        startY = y;
    }
}

void SelectionBox::setSelection(bool s) {
    if (!s) {
        resetPositions();
    }
    selecting = s;
}

void SelectionBox::draw(int x, int y) {
    if (y < startY && x > startX) {
        DrawRectangle(startX, y, x - startX, startY - y, SKYBLUE);
    } else if (y > startY && x > startX) {
        DrawRectangle(startX, startY, x - startX, y - startY, SKYBLUE);
    } else if (y > startY && x < startX) {
        DrawRectangle(x, startY, startX - x, y - startY, SKYBLUE);
    } else if (y < startY && x < startX) {
        DrawRectangle(x, y, startX - x, startY - y, SKYBLUE);
    }
}

// PRIVATE:
void SelectionBox::resetPositions() {
    startX = 0;
    startY = 0;
}
