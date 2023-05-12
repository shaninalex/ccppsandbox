#ifndef __MAP_H__
#define __MAP_H__

#include "raylib.h"

class Map {
  private:
    unsigned int x;
    unsigned int y;
    Vector2 size;

  public:
    Map();
    Map(unsigned int x, unsigned int y, Vector2 size);
    void draw();
};

#endif //!__MAP_H__