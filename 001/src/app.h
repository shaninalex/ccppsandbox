#ifndef __APP_H__
#define __APP_H__

#include "environment/environment.h"
#include "ui/selection_box.h"
#include "ui/ui.h"
#include <string>

class App {
  public:
    App(const std::string &title);
    ~App();

    void run();

  private:
    int screenWidth;
    int screenHeight;
    std::string windowTitle;
    Ui ui;
    Environment environment;

    void updates();
    void drawing();
};

#endif // !__APP_H__
