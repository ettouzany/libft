/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:28:55 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/04 20:14:37 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	char *output;

	output = (char *)str;
	c = (unsigned char)c;

	if (!c)
		return output + ft_strlen(output);
	while (*output != '\0')
		if (*output++ == c)
			return --output;
	return (NULL);
}
