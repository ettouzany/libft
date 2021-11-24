/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 03:31:40 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/23 18:28:05 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if ((*lst))
    {
        while ((*lst)->next)
        {
            lst = &(*lst)->next;
        }
        (*lst)->next = new;
    }
    else
        (*lst) = new;
}