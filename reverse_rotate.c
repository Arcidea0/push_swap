/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <armgevor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:50:13 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/04 09:04:06 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rot(t_list **stack)
{
	t_list	*tmp;
	t_list	*verj;
	t_list	*naxaverj;

	if (ft_lstsize(*stack) < 2)
		return ;
	verj = stacki_verj(*stack);
	naxaverj = stacki_naxaverj(*stack);
	tmp = *stack;
	verj->next = tmp;
	*stack = naxaverj;
	(*stack)->next = NULL;
	*stack = verj;
}

void	rra(t_list **a)
{
	rev_rot(a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	rev_rot(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rev_rot(a);
	rev_rot(b);
	write(1, "rrr\n", 4);
}
