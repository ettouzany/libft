#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *output;

    size_t i;
    i = 0;
    output = malloc(len);
    if (!output)
        return NULL;

    while (i < len)
    {
        output[i] = s[start + i];
        i++;
    }
    return output;
}
