#ifndef __UI_H__
#define __UI_H__

#include "selection_box.h"

class Ui {
  public:
    Ui();
    ~Ui();

    void render();

  private:
    SelectionBox selectbox;
};

#endif // !__UI_H__
