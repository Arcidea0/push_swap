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

void	bsa(t_list **a)
{
	swap(a);
}

void	bsb(t_list **b)
{
	swap(b);
}

void	bss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}
