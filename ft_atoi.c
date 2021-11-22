#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int out;
    int sign;

    out = 0;
    sign = 1;

    while ((*str >= 9 && *str <= 13) || *str == 32 || *str == 0)
        str++;

    if (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        out = out * 10 + *str++ - '0';
    }

    return (sign * out);
}

// int main(void)
// {
//     char *s = "+444";
//     printf("%d %d", ft_atoi(s), atoi(s));
//     return (0);
// }
