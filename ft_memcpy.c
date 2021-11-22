#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst;
    char *s = (char *)src;

    size_t i = 0;

    // printf("%zu", dist_lenght);
    // printf("ok");

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