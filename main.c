#include "libsu.h"

int main() {
    libsu_processimage instance;
    int r = libsu_sudo(&instance, "ls /");
    LOG_INFO("libsu returned: %d", instance.return_code);
    libsu_cleanup(&instance);
    return 0;
}