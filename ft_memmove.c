#include <stdio.h>
#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst;
    char s[n];

    size_t dist_lenght;
    size_t src_lenght;
    size_t i = 0;
    dist_lenght = 0;
    src_lenght = 0;
    while (i < n)
    {
        s[i] = *(char *)(src + i);
        i++;
    }

    // while (d[dist_lenght])
    //     dist_lenght++;

    // if (dist_lenght > n)
    //     return NULL;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    // d[i] = '\0';
    return (void *)dst;

    // char *str1 = (char *)s1;
    // char *str2 = (char *)s2;
    // while (i < n)
    // {
    //     j = str1[i] - str2[i];
    //     if (str1[i] != str2[i])
    //         break;
    //     i++;
    // }
    // return j;
}