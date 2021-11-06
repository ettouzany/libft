#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    char *output;

    output = NULL;
    while (*s != '\0')
        if (*s++ == c)
            output = (char *)(s - 1);
    return (output);
}