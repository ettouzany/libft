/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:14:15 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 17:16:29 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;
	size_t	j;

	i = 0;
	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		j = str2[i] - str1[i];
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	return (j);
}
