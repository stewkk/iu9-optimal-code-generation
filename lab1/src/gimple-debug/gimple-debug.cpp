#include <gcc-plugin.h>
#include <stdio.h>

int plugin_is_GPL_compatible;

int plugin_init(struct plugin_name_args *args, struct plugin_gcc_version *version) {
    printf("Hello, GCC!!!\n");
    return 0;
}
