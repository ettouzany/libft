#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    size_t i;
    i = 0;

    char *output;
    while (s1[i])
        i++;

    output = (char *)malloc(i + 1);
    if (!output)
    {
        return NULL;
    }

    while (*s1)
    {
        output[i++] = *s1++;
    }
    output[i] = '\0';

    return output;
}