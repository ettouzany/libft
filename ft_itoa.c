#include <stdio.h>
#include <stdlib.h>

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
char *ft_itoa(int n)
{
    int is_negative;
    int numtobyte;
    char *output;
    int i;

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
    output = malloc(numtobyte + is_negative + 1);
    if (!output)
        return NULL;
    if (is_negative)
        output[i++] = '-';

    while (n >= 10)
    {
        output[i++] = n / ft_mypow(numtobyte) + 48;
        n = n % ft_mypow(numtobyte--);
    }

    output[i++] = n % 10 + 48 + is_maxint;
    output[i] = '\0';
    return output;
}
