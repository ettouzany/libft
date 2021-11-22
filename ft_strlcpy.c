#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t src_lenght;
    size_t i = 0;
    src_lenght = 0;

    while (src[src_lenght])
        src_lenght++;
    if (!dstsize)
        return src_lenght;
    while (i < dstsize - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    // printf("%zu", i);
    if (i < dstsize)
        dst[i] = '\0';
    return src_lenght;
}