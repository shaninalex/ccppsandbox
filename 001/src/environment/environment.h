#ifndef __ENVIRONMENT_H__
#define __ENVIRONMENT_H__

#include "grid.h"

class Environment {
  public:
    Environment();
    ~Environment();
    void draw();

  private:
    Grid grid;
};

#endif // !__ENVIRONMENT_H__
