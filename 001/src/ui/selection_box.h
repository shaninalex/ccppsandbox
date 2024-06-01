#ifndef __SELECTION_BOX_H__
#define __SELECTION_BOX_H__

#include <raylib.h>
class SelectionBox {
  public:
    SelectionBox();
    ~SelectionBox();

    bool isSelecting();
    void startSelection(int x, int y);
    void setSelection(bool t);
    void draw(int x, int y);
    void handle();

  private:
    int startX;
    int startY;
    bool selecting;
    Color boxColor;

    void resetPositions();
};

#endif // !__SELECTION_BOX_H__
