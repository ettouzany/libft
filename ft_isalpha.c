/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:55 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/04 20:14:37 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
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
