#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *output;
    i = 0;
    while (s[i])
        i++;
    output = malloc(i + 1);
    if (!output)
        return NULL;
    i = 0;
    while (s[i])
    {
        output[i] = f(i, s[i]);
        i++;
    }
    output[i] = '\0';
    return output;
}