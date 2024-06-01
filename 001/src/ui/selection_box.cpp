#include "selection_box.h"
#include "../utils/config.h"
#include "raylib.h"

SelectionBox::SelectionBox() {
    startX = 0;
    startY = 0;
    selecting = false;
    boxColor = SKYBLUE;
    if (ConfigManager::get().conf().debug) {
        boxColor = GRAY;
    }
}

SelectionBox::~SelectionBox() {}

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
        DrawRectangle(startX, y, x - startX, startY - y, boxColor);
    } else if (y > startY && x > startX) {
        DrawRectangle(startX, startY, x - startX, y - startY, boxColor);
    } else if (y > startY && x < startX) {
        DrawRectangle(x, startY, startX - x, y - startY, boxColor);
    } else if (y < startY && x < startX) {
        DrawRectangle(x, y, startX - x, startY - y, boxColor);
    }
}

void SelectionBox::resetPositions() {
    startX = 0;
    startY = 0;
}

void SelectionBox::handle() {
    // TODO: is on global select state

    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
        startSelection(GetMouseX(), GetMouseY());
        setSelection(true);
    }

    if (IsMouseButtonUp(MOUSE_BUTTON_LEFT)) {
        setSelection(false);
    }

    if (isSelecting()) {
        draw(GetMouseX(), GetMouseY());
    }
}
