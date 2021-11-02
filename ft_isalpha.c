
int ft_isalpha(int c)
{
    if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
        return 1;
    else
        return 0;
}

// int main()
// {
//     char val1 = 's';
//     char val2 = '8';
//     char val3 = '$';
//     if (ft_isalpha(val1))
//         printf("The character is alpha\n");
//     else
//         printf("The character is not alpha\n");
//     if (ft_isalpha(val2))
//         printf("The character is alpha\n");
//     else
//         printf("The character is not alpha\n");
//     if (ft_isalpha(val3))
//         printf("The character is alpha\n");
//     else
//         printf("The character is not alpha");
//     return 0;
// }
