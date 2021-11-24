/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:44:37 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 16:44:58 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// int main()
// {
//     char val1 = 's';
//     char val2 = '8';
//     char val3 = '$';
//     if (ft_isdigit(val1))
//         printf("The character is numeric\n");
//     else
//         printf("The character is not numeric\n");
//     if (ft_isdigit(val2))
//         printf("The character is numeric\n");
//     else
//         printf("The character is not numeric");
//     if (ft_isdigit(val3))
//         printf("The character is numeric\n");
//     else
//         printf("The character is not numeric");
//     return 0;
// }
