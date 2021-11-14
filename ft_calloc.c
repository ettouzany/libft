#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    void *output;

    output = malloc(count * size);
    ft_bzero(output, count * size);
    if (!output)
        return NULL;

    return output;
}