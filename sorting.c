/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:31:03 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/11 11:31:05 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_ab(t_list **a, t_list **b, int n)
{
	int		counter;

	counter = 0;
	while (*a)
	{
		if ((*a)->index <= counter)
		{
			pb(a, b);
			if ((*b)->index)
				rb(b);
		}
		else if ((*a)->index >= counter && (*a)->index <= counter + n)
			pb(a, b);
		else
		{
			ra(a);
			counter--;
		}
		counter++;
	}
}

void	sorting_ba(t_list **a, t_list **b, int len)
{
	int	max;

	while (*b)
	{
		max = maximum(b);
		if (max <= len / 2)
			while (max-- >= 1)
				rb(b);
		else
		{
			while (len - max)
			{
				rrb(b);
				max++;
			}
		}
		pa(a, b);
		len--;
	}
}

void	minusacum(t_list **lst)
{
	t_list	*x;

	x = *lst;
	while (x->next)
		x->index = -1;
}

int	is_sorted(int *x, int len)
{
	int	i;

	i = 0;
	while (++i < len)
		if (x[i - 1] > x[i])
			return (1);
	return (0);
}
