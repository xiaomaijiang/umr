#include <apr_strings.h>
char *string_format()
{
    char buff[0];
    apr_snprintf(buff, 1, "def%s,%d", "111", 32);
}