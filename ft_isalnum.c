/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:42:54 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 16:43:37 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

// int main()
// {
//     char val1 = 's';
//     char val2 = '8';
//     char val3 = '$';
//     if (ft_isalnum(val1))
//         printf("The character is alphanumeric\n");
//     else
//         printf("The character is not alphanumeric\n");
//     if (ft_isalnum(val2))
//         printf("The character is alphanumeric\n");
//     else
//         printf("The character is not alphanumeric");
//     if (ft_isalnum(val3))
//         printf("The character is alphanumeric\n");
//     else
//         printf("The character is not alphanumeric");
//     return 0;
// }