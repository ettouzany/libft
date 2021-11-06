/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:55 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/04 20:14:37 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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