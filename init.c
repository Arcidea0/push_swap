/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:18:07 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/11 11:18:09 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *New)
{
	if (!*lst)
	{
		*lst = New;
		return ;
	}
	ft_lstlast(*lst)->next = New;
}

void	into_list(int *tver, t_list **a, int len)
{
	int		i;
	t_list	*new;
	t_list	*skizb;

	i = -1;
	*a = NULL;
	while (++i < len)
	{
		new = NULL;
		if (i == 0)
		{
			*a = ft_lstnew(tver[i]);
			skizb = *a;
		}
		else
		{
			new = ft_lstnew(tver[i]);
			ft_lstadd_back(a, new);
		}
	}
	*a = skizb;
}

void	sort_int(t_list *list, int len, int i)
{
	int		min;
	t_list	*skizb;

	while (i != len - 1)
	{
		min = INT_MAX;
		skizb = list;
		while (skizb)
		{
			if (skizb->content < min && skizb->index == -1)
				min = skizb->content;
			skizb = skizb->next;
		}
		skizb = list;
		while (skizb)
		{
			if (skizb->content == min)
			{
				skizb->index = ++i;
				break ;
			}
			skizb = skizb->next;
		}
	}
}
