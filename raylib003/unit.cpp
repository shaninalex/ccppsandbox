#include "unit.h"

#include "raylib.h"

Unit::Unit(int x, int y, int w, int h, Color c) {
    posX = x;
    posY = y;
    width = w;
    height = h;
    color = c;
}

void Unit::draw() {
    DrawRectangle(posX - (width / 2), posY - (height / 2), width, height,
                  color);
}

void Unit::move(int x, int y) {
    posX = x;
    posY = y;
}
