#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    char *str = (char *)s;
    while (str[i] != c && i < n && str[i])
    {
        i++;
    }
    if (str[i])
        return str + i;
    else
        return NULL;
}