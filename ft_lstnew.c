/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 01:38:14 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 17:11:07 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(int argc, char const *argv[])
// {
// 	t_list	*new;

// 	new = ft_lstnew("sss");
// 	printf("%s", new->content);
// 	return (0);
// }
