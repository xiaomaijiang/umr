#include <apr_general.h>
#include <apr_tables.h>
#include <apr_user.h>
#include "boot.h"

int main(int argc, const char *const *argv, const char *const *env)
{
    umr_boot_t boot;
    boot_app(&boot, argc, argv, env);
    printf("Success\n");
    return 0;
}