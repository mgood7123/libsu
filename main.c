#include "libsu.h"

int main() {
    libsu_processimage instance;
    int r;
    r = libsu_sudo(&instance, "ls /");
    libsu_LOG_INFO("libsu returned: %d", instance.return_code);
    libsu_LOG_INFO("stdout: %s", instance.string_stdout);
    libsu_LOG_INFO("stderr: %s", instance.string_stderr);
    libsu_cleanup(&instance);

    r = libsu_sudo(&instance, "true");
    libsu_LOG_INFO("libsu returned: %d", instance.return_code);
    libsu_LOG_INFO("stdout: %s", instance.string_stdout);
    libsu_LOG_INFO("stderr: %s", instance.string_stderr);
    libsu_cleanup(&instance);
    return 0;
}