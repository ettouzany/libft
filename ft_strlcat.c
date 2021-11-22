#include <stdio.h>

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t dist_lenght;
    size_t src_lenght;
    size_t i = 0;
    dist_lenght = 0;
    src_lenght = 0;
    while (src[src_lenght])
        src_lenght++;

    while (dst[dist_lenght])
        dist_lenght++;

    if (dist_lenght > dstsize)
        return src_lenght + dstsize;

    while (i + dist_lenght + 1 < dstsize && src[i])
    {
        dst[dist_lenght + i] = src[i];
        i++;
    }

    dst[dist_lenght + i] = '\0';
    return src_lenght + dist_lenght;
}