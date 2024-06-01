#include "src/app.h"
#include "src/utils/argparser.h"
#include "src/utils/config.h"
#include <cstdio>

int main(int argc, char *argv[]) {
    ArgParser argParser(argc, argv);
    Config config = ConfigManager::get().conf();

    if (config.debug) {
        printf("debug is ON\n");
    } else {
        printf("debug is OFF\n");
    }

    App app = App("New Window title");
    app.run();
    return 0;
}
