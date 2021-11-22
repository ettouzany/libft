#include <stddef.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *output;

    output = NULL;
    unsigned char a = (unsigned char)c;
    if (!a)
        return (char *)s + ft_strlen(s);
    while (*s != '\0')
        if (*s++ == a)
            output = (char *)(s - 1);
    return (output);
}