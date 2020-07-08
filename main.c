#include "libsu.h"

int main() {
    libsu_processimage instance;
    int r;
    r = libsu_sudo(&instance, "ls /");
    libsu_LOG_INFO("libsu returned: %d, stdout: %s", instance.return_code, instance.string_stdout);
    libsu_cleanup(&instance);
    r = libsu_sudo(&instance, "true");
    libsu_LOG_INFO("libsu returned: %d, stdout: %s", instance.return_code, instance.string_stdout);
    libsu_cleanup(&instance);
    return 0;
}