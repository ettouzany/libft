#include <stdio.h>

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    char *d = (char *)dst;
    char *s = (char *)src;

    size_t dist_lenght;
    size_t src_lenght;
    size_t i = 0;
    dist_lenght = 0;
    src_lenght = 0;
    while (s[src_lenght])
        src_lenght++;

    while (d[dist_lenght])
        dist_lenght++;

    if (dist_lenght > n)
        return NULL;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return (void *)src;

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