#include "selectionbox.h"

SelectionBox::SelectionBox() {}

bool SelectionBox::isSelecting() { return selecting; }

void SelectionBox::startSelection(int x, int y) {
    startX = x;
    startY = y;
}

void SelectionBox::endSelection(int x, int y) {
    endX = x;
    endY = y;
}
