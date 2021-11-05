/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:44:40 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/04 17:15:47 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
char the_chars[] = {'A', 0x50, 'Z'};

int main(int argc, char const *argv[])
{
	int	i;
	char str[] = "rrr*";
	printf("%c\n", *ft_strchr(str, 48));
	// for (i = 0; i < 5; i++)
	// {
	// 	if (strchr(str, 42))
	// 	{
	// 		printf("Char %c is an ASCII character\n", the_chars[i]);
	// 	}
	// 	else
	// 	{
	// 		printf("Char %c is not an ASCII character\n", the_chars[i]);
	// 	}
	// }
	return (0);
}
