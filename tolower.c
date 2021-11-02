int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return c + 32;
    else
        return c;
}

// int main(int argc, char const *argv[])
// {
//     int i = 0;
//     char str[] = "Test String.\n";
//     char c;
//     while (str[i])
//     {
//         c = str[i];
//         putchar(ft_tolower(c));
//         i++;
//     }
//     return 0;
// }