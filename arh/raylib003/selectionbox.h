#ifndef __SELECTION_BOX_H__
#define __SELECTION_BOX_H__

class SelectionBox {
  private:
    int startX;
    int startY;
    bool selecting;

    void resetPositions();

  public:
    SelectionBox();
    bool isSelecting();
    void setSelection(bool t);
    void startSelection(int x, int y);
    void draw(int x, int y);
};

#endif // !__SELECTION_BOX_H__
