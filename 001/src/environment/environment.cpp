#include "environment.h"
#include "grid.h"
#include <stdio.h>

Environment::Environment() : grid() { printf("Initialize environment...\n"); }

Environment::~Environment() { printf("destroy environment...\n"); }

void Environment::draw() { grid.draw(); }
