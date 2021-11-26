/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: net-touz <net-touz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:10:53 by net-touz          #+#    #+#             */
/*   Updated: 2021/11/24 17:11:05 by net-touz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *output;
	// size = ft_lstsize(lst);
	// list = (t_list **)malloc(sizeof(t_list *) * size);
	output = NULL;
	if (lst)
	{
		while (lst->next)
		{
			f(lst->content);
			del(lst->content);
			lst = lst->next;
			if (output)
			{
				output->next = (t_list *)malloc(sizeof(lst));
				output = output->next;
			}
			else
				output = (t_list *)malloc(sizeof(lst));
			output->content = lst->content;
		}
	}
	return output;
}

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;
void addOne(void *p) { ++*(int *)p; }
#include <stdio.h>
#include <stdlib.h>
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
t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst->next)
		{
			f(lst);
			lst = lst->next;
		}
		f(lst);
	}
}
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *output;
	t_list *head;

	// size = ft_lstsize(lst);
	// list = (t_list **)malloc(sizeof(t_list *) * size);
	output = NULL;
	if (lst)
	{
		while (lst->next)
		{
			f(lst->content);
			output = (t_list *)malloc(sizeof(t_list));
			output->content = lst->content;
			output->next = NULL;
			output = output->next;
			// del(lst->content);
			lst = lst->next;
		}
	}
	return output;
}
int main()
{
	int tab[] = {0, 1, 2, 3};
	t_list *l = ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
		ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list *m = ft_lstmap(l, addOne, free);
}