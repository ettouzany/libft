#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *output;

    size_t i;
    i = 0;
    output = malloc(ft_strlen(s1) + ft_strlen(s2));
    if (!output)
        return NULL;
    while (*s1)
        output[i++] = *s1++;
    while (*s2)
        output[i++] = *s2++;
    output[i] = '\0';

    return output;
}