#include <stdio.h>
#include <stddef.h>
char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;
    size_t j = 0;
    // size_t k = 0;
    while (s1[i] && i < n)
    {
        j = 0;
        while (s1[i + j] == s2[j] && i + j < n)
        {
            if (s2[j] == '\0')
                break;
            j++;
        }
        if (s2[j] == '\0')
        {
            return (char *)s1 + i;
        }
        i++;
    }
    if (!s1[0] && !s2[0])
        return (char *)s1;
    return NULL;
}

// int mzain(int argc, char const *argv[])
// {
//     char haystack[] = "TutorialsPoitTutorialsPoint";
//     char needle[10] = "Point";
//     char *ret;

//     ret = ft_strstr(haystack, needle);

//     printf("The substring is: %s\n", ret);
//     return 0;
// }
