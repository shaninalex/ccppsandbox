#include "map.h"
#include "raylib.h"

Map::Map() {
    x = 500;
    y = 500;
    size = Vector2{50.0f, 50.0f};
}

Map::Map(unsigned int xAmount, unsigned int yAmount, Vector2 tileSize) {
    x = xAmount;
    y = yAmount;
    size = tileSize;
}

void Map::draw() {
    // Draw a map line by line
    for (int i = 0; i < x / size.x; i++) {
        for (int b = 0; b < y / size.y; i++) {
        }
    }
}