#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    size_t find;

    i = 0;
    find = 0;
    char *str = (char *)s;
    while (str[i] != (unsigned char)c && i < n)
    {
        i++;
        if (str[i] == (unsigned char)c)
            find = i;
    }

    if ((find || *str == c) && n)
        return str + find;
    else
        return NULL;
}