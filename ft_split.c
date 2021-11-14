

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t ft_words(char const *s, char c)
{
    size_t i;

    i = 1;
    while (*s)
    {
        if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
            i++;
        s++;
    }
    return i;
}

char **ft_split(char const *s, char c)
{
    char **output;
    size_t words;
    size_t i;
    i = 0;
    words = ft_words(s, c);
    output = (char **)malloc(words + 1);
    if (!output)
        return NULL;
    while (i < words && ft_strchr(s, c))
    {
        output[i] = malloc(ft_strlen(s) - ft_strlen(ft_strchr(s, c) + 1));

        ft_strlcpy(output[i], s, ft_strlen(s) - ft_strlen(ft_strchr(s, c) + 1));
        s = ft_strchr(s, c) + 1;
        while (*s == c)
            s = ft_strchr(s, c) + 1;
        i++;
    }
    printf("%s\n", output[i - 1]);
    output[i] = NULL;
    return output;
}