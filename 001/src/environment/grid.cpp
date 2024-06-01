#include "grid.h"
#include <raylib.h>
#include <stdio.h>

Grid::Grid() : cellSize(20) {
    printf("Initialize grid...\n");
    // TODO: get cellSize from config manager
}

Grid::~Grid() {
    // TODO: remove raylib resources that renders cell grid
    printf("destroy grid ... \n");
}

void Grid::draw() {
    // DrawGrid(1000, 10.10);
    for (size_t y = 0; y < 100; y++) {
        for (size_t x = 0; x < 100; x++) {
            DrawRectangleLines(cellSize * x, cellSize * y, cellSize, cellSize,
                               GREEN);
        }
    }
}
