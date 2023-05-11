#include "selectionbox.h"
#include "raylib.h"
#include <iostream>

SelectionBox::SelectionBox() {
    startX = 0;
    startY = 0;
    endX = 0;
    endY = 0;
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
    // DrawRectangle(x, y, startX, startY, SKYBLUE);
    DrawRectangle(startX, startY, x - startX, y - startY, SKYBLUE);
}

// PRIVATE:
void SelectionBox::resetPositions() {
    startX = 0;
    startY = 0;
    endX = 0;
    endY = 0;
}