/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <armgevor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:50:22 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/04 09:05:09 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bra(t_list **a)
{
	rotate(a);
}

void	brb(t_list **b)
{
	rotate(b);
}

void	brr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
}
