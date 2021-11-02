int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return c - 32;
    else
        return c;
}

// int main(int argc, char const *argv[])
// {
//     int i = 0;
//     char str[] = "ATest StringZ.\n";
//     char c;
//     while (str[i])
//     {
//         c = str[i];
//         putchar(ft_toupper(c));
//         i++;
//     }
//     return 0;
// }