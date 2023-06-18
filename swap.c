/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:50:31 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/04 09:06:14 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list	*s;
	t_list	*ss;
	t_list	*sss;

	if (ft_lstsize(*stack) < 2)
		return ;
	s = *stack;
	ss = (*stack)->next;
	sss = (*stack)->next->next;
	*stack = ss;
	(*stack)->next = s;
	(*stack)->next->next = sss;
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
