/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 18:14:57 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 18:15:46 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dist_lenght;
	size_t	src_lenght;
	size_t	i;

	i = 0;
	dist_lenght = 0;
	src_lenght = 0;
	while (src[src_lenght])
		src_lenght++;
	while (dst[dist_lenght])
		dist_lenght++;
	if (dist_lenght > dstsize)
		return (src_lenght + dstsize);
	while (i + dist_lenght + 1 < dstsize && src[i])
	{
		dst[dist_lenght + i] = src[i];
		i++;
	}
	dst[dist_lenght + i] = '\0';
	return (src_lenght + dist_lenght);
}
