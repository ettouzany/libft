#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    i = 0;

    size_t j = 0;
    // size_t k = 0;
    char *str1 = (char *)s1;
    char *str2 = (char *)s2;
    while (i < n)
    {
        j = str2[i] - str1[i];
        if (str1[i] != str2[i])
            break;
        i++;
    }
    return j;
}