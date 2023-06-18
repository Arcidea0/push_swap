/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:26:51 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/11 11:26:52 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	erku(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	ereq(t_list	**a)
{
	erku(a);
	if ((*a)->next->index > (*a)->next->next->index)
	{
		rra(a);
		erku(a);
	}
}

void	chors(t_list **a, t_list **b)
{
	int	min;

	min = find_min(*a);
	if (min == 1)
		ra(a);
	else if (min == 2)
	{
		rra(a);
		rra(a);
	}
	else if (min == 3)
		rra(a);
	pb(a, b);
	ereq(a);
	pa(a, b);
}

void	hing(t_list **a, t_list **b)
{
	int	min;

	min = find_min(*a);
	if (min == 1 || min == 2)
	{
		if (min == 2)
			ra(a);
		ra(a);
	}
	else if (min == 3 || min == 4)
	{
		if (min == 3)
			rra(a);
		rra(a);
	}
	pb(a, b);
	chors(a, b);
	pa(a, b);
	pa(a, b);
}

int	find_min(t_list *a)
{
	int		i;
	int		j;
	int		min;
	t_list	*lst;

	i = 0;
	j = 0;
	lst = a;
	min = lst->index;
	lst = lst->next;
	while (lst)
	{
		i++;
		if (min > lst->index)
		{
			min = lst->index;
			lst = lst->next;
			j = i;
		}
		else
			lst = lst->next;
	}
	return (j);
}
