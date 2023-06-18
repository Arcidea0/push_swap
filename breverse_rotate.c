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

void	brra(t_list **a)
{
	rev_rot(a);
}

void	brrb(t_list **b)
{
	rev_rot(b);
}

void	brrr(t_list **a, t_list **b)
{
	rev_rot(a);
	rev_rot(b);
}
