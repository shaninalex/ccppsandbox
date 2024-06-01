#ifndef __UNIT_H__
#define __UNIT_H__

#include <raylib.h>
class Unit {
  private:
    int posX;
    int posY;
    int width;
    int height;
    Color color;

  public:
    Unit(int x, int y, int w, int h, Color c);
    ~Unit();
    void draw();
    void move(int x, int y);
};

#endif // !__UNIT_H__
