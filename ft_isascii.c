int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    else
        return 0;
}

// char the_chars[] = {'A', 0x50, 'Z'};

// #define SIZE sizeof(the_chars) / sizeof(char)

// int main(void)
// {
//     int i;

//     for (i = 0; i < SIZE; i++)
//     {
//         if (ft_isascii(the_chars[i]))
//         {
//             printf("Char %c is an ASCII character\n",
//                    the_chars[i]);
//         }
//         else
//         {
//             printf("Char %c is not an ASCII character\n",
//                    the_chars[i]);
//         }
//     }

//     return EXIT_SUCCESS;
// }