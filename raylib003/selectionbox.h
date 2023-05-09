#ifndef __SELECTION_BOX_H__
#define __SELECTION_BOX_H__

class SelectionBox {
  private:
    int startX;
    int startY;
    int endX;
    int endY;
    bool selecting;

  public:
    SelectionBox();
    bool isSelecting();
    void startSelection(int x, int y);
    void endSelection();
};

#endif // !__SELECTION_BOX_H__
