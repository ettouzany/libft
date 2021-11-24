/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:11:35 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 16:44:24 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
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