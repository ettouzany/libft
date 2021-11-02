
char *ft_strstr(char *s1, char *s2)
{
    int i = 0;
    while (*s1)
    {
        i = 0;
        while (*s1 == s2[i] || s2[i] == '\0')
        {
            if (s2[i] == '\0')
                return s1 - i;
            i++;
            s1++;
        }
        s1++;
    }
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     char haystack[] = "TutorialsPoitTutorialsPoint";
//     char needle[10] = "Point";
//     char *ret;

//     ret = ft_strstr(haystack, needle);

//     printf("The substring is: %s\n", ret);
//     return 0;
// }