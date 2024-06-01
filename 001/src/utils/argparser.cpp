#include "argparser.h"
#include "config.h"
#include <string>

ArgParser::ArgParser(int argc, char *argv[]) {
    config.debug = false;
    parseArguments(argc, argv);

    ConfigManager::get().set(config);
}

void ArgParser::parseArguments(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--debug" || arg == "-d") {
            config.debug = true;
        }
    }
}
