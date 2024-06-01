#ifndef __ARGPARSER_H__
#define __ARGPARSER_H__

#include "config.h"
class ArgParser {
  public:
    ArgParser(int argc, char *argv[]);
    void parseArguments(int argc, char *argv[]);

  private:
    Config config;
};

#endif // !__ARGPARSER_H__
