int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}

// int main()
// {
//     char c;

//     c = 126;
//     printf("Result when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

//     return 0;
// }