#ifndef __CONFIG_H__
#define __CONFIG_H__

struct Config {
    bool debug;
};

class ConfigManager {
  public:
    static ConfigManager &get() {
        static ConfigManager instance;
        return instance;
    }
    Config conf() const { return config; }
    void set(const Config &newConfig) { config = newConfig; }

  private:
    Config config;
    ConfigManager() : config{false} {}

    // Disable copy constructor and copy assignment operator
    ConfigManager(const ConfigManager &) = delete;
    ConfigManager &operator=(const ConfigManager &) = delete;
};

#endif // !__CONFIG_H__
