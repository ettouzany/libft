#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    size_t j = 0;
    // size_t k = 0;
    while (s1[i] && s1[2] && i < n)
    {
        j = s1[i] - s2[i];
        if (s1[i] != s2[i])
            break;
        i++;
    }
    return j;
}
