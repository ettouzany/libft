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
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char the_chars[] = {'A', 0x50, 'Z'};

int main()
{
	char str[7] = "abcdef";
	// char srt1[] = "00";
	// char srt11[] = "11";
	char srt2[] = "afe";
	char srt22[] = "11";
	//  char srt2[] = "bbbbb";
	//  char srt22[] = "kkkkkk";
	//   bzero(srt, 3);
	//   char srt1[] = "23230oo";
	//   ft_bzero(srt1, 3);
	// ft_split("ss", ' ');
	printf("%s\n", ft_itoa(0));
	printf("%s\n", (char *)ft_memmove((str + 6), str, 10));
	printf("%s\n", str);
	printf("\n");
	printf("\n");
	printf("%s\n", srt22);
	printf("%s\n", (char *)memmove(srt22, srt2, 3));
	printf("%s\n", srt22);
	//  printf("%lu\n", ft_strlcat(srt2, srt22, 4));
	//   printf("%s\n", srt1 + 3);
	//   printf("%p\n", ft_strchr(srt, 'o'));
	//   printf("%p\n", strchr(srt, 'o'));
	//    for (i = 0; i < 5; i++)
	//    {
	//    	if (strchr(str, 42))
	//    	{
	//    		printf("Char %c is an ASCII character\n", the_chars[i]);
	//    	}
	//    	else
	//    	{
	//    		printf("Char %c is not an ASCII character\n", the_chars[i]);
	//    	}
	//    }
	return (0);
}
