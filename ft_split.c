

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t ft_words(char const *s, char c)
{
    size_t i;

    i = 0;
    while (*s)
    {
        if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
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
    // printf("%zu\n", words);
    output = (char **)malloc(sizeof(char *) * (words + 1));
    if (!output)
        return NULL;
    while (i < words)
    {
        while (*s == c)
            s++;
        output[i] = malloc(ft_strlen(s) - ft_strlen(ft_strchr(s, c)) + 1);
        if (!output[i])
        {
            while (i >= 0)
            {
                free(output[i]);
                i--;
            }
            free(output);
            return NULL;
        }

        // printf("%zu\n", ft_strlen(s) - ft_strlen(ft_strchr(s, c)) + 1);

        ft_strlcpy(output[i], s, ft_strlen(s) - ft_strlen(ft_strchr(s, c)) + 1);
        s = ft_strchr(s, c) + 1;

        // printf("%s\n", output[i]);
        i++;
    }
    // printf("%s\n", output[i - 1]);
    //
    output[i] = NULL;
    // *output[i] = 0;
    return output;
}
