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

#define STRING_1 "the cake is a lie !\0I'm hidden lol\r\n"
#define STRING_4 "phrase differente pour le test"
#define STRING_2 "there is no stars in the sky"
#define STRING_3 "test basic !"

char the_chars[] = {'A', 0x50, 'Z'};
char func(unsigned int i, char c)
{
	i = c;
	return 'x';
}

int main()
{
	// char str[7] = "abcdef";
	//  char srt1[] = "00";
	//  char srt11[] = "11";
	// char srt2[] = "afe";
	// char srt22[] = "11";
	//   char srt2[] = "bbbbb";
	//   char srt22[] = "kkkkkk";
	//    bzero(srt, 3);
	//    char srt1[] = "23230oo";
	//    ft_bzero(srt1, 3);
	// ft_split("ss", ' ');
	if (i == 2 && dest[2] == 'A'))
		printf("pop");
	// Post 0
	// /* 2 */ check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7));
	// showLeaks(); // 0 move
	// /* 3 */ check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7));
	// showLeaks(); // forward
	// /* 4 */ check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7));
	// showLeaks(); // reverse

	char src[] = STRING_3;
	char buff1[] = STRING_1;
	char buff2[] = STRING_1;

	memcpy(buff1, src, strlen(src));
	ft_memcpy(buff2, src, strlen(src));
	printf("%s", buff1);
	printf("%s", buff2);
	// printf("%s\n", ft_strmapi("string", func));
	// printf("%s\n", (char *)ft_memmove((str + 6), str, 10));
	// printf("%s\n", str);
	// printf("\n");
	// printf("\n");
	// printf("%s\n", srt22);
	// printf("%s\n", (char *)memmove(srt22, srt2, 3));
	// printf("%s\n", srt22);
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
