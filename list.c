/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:49:18 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/02 04:59:35 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

t_list	*stacki_verj(t_list *stack)
{
	while (stack && stack->next)
		stack = stack->next;
	return (stack);
}

t_list	*stacki_naxaverj(t_list *stack)
{
	while (stack && stack->next && stack->next->next)
		stack = stack->next;
	return (stack);
}

int	stack_chap(t_list *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

// void tpox(t_list *st)
// {
// 	t_list *b;

// 	if (st)
// 	{
// 		b = st;
// 		while (b)
// 		{
// 			printf("[%d]", b->index);
// 			b = b->next;
// 		}
// 		printf("\n");
// 	}
// }

int	generater(int len)
{
	if (len > 5 && len < 30)
		return (len / 2);
	else if (len >= 30 && len < 50)
		return (len / 4);
	else if (len >= 50 && len < 500)
		return (len / 8);
	else if (len >= 500)
		return (len / 16);
	return (1);
}
