
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int ft_numtobyte(int n)
{
    int i;

    i = 1;
    while (n >= 10)
    {
        n = n / 10;
        i++;
    }
    return i;
}

int ft_mypow(int numtobyte)
{
    int i;

    i = 1;
    while (--numtobyte)
    {
        i *= 10;
    }

    return i;
}

void ft_putnbr_fd(int n, int fd)
{

    int is_negative;
    int numtobyte;
    int i;
    char c = 0;

    is_negative = 0;
    int is_maxint = 0;
    i = 0;
    if (n < 0)
    {
        is_negative = 1;
        if (n == -2147483648 && n++)
            is_maxint = 1;
        n *= -1;
        numtobyte = ft_numtobyte(n);
    }
    else
        numtobyte = ft_numtobyte(n);

    if (is_negative)
        write(fd, "-", 1);

    while (n >= 10)
    {
        c = n / ft_mypow(numtobyte) + 48;
        write(fd, &c, 1);
        n = n % ft_mypow(numtobyte--);
    }

    c = n % 10 + 48 + is_maxint;
    write(fd, &c, 1);
}