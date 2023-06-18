/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bnusot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:39:14 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/13 11:39:16 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_list(t_list *a)
{
	t_list	*x;

	x = a;
	while (x && x->next)
	{
		if (x->content > x->next->content)
			return (1);
		x = x->next;
	}
	return (0);
}

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t		m;

	m = 0;
	if (!a && !b)
		return (0);
	while (a[m] && b[m] && m < n)
	{
		if (a[m] != b[m])
			return ((unsigned char)a[m] - (unsigned char)b[m]);
		m++;
	}
	if (m != n)
		return ((unsigned char)a[m] - (unsigned char)b[m]);
	return (0);
}

void	functions(t_list **a, t_list **b, char *str)
{
	if (!ft_strncmp(str, "sa\n", 3))
		bsa(a);
	else if (!ft_strncmp(str, "sb\n", 3))
		bsb(b);
	else if (!ft_strncmp(str, "ss\n", 3))
		bss(a, b);
	else if (!ft_strncmp(str, "pa\n", 3))
		bpa(a, b);
	else if (!ft_strncmp(str, "pb\n", 3))
		bpb(a, b);
	else if (!ft_strncmp(str, "ra\n", 3))
		bra(a);
	else if (!ft_strncmp(str, "rb\n", 3))
		brb(b);
	else if (!ft_strncmp(str, "rr\n", 3))
		brr(a, b);
	else if (!ft_strncmp(str, "rra\n", 4))
		brra(a);
	else if (!ft_strncmp(str, "rrb\n", 4))
		brrb(b);
	else if (!ft_strncmp(str, "rrr\n", 4))
		brrr(a, b);
	else
		fr_exit_str(NULL);
}

void	free_split(char **spabc)
{
	int	i;

	i = -1;
	while (spabc[++i])
		free(spabc[i]);
	free(spabc);
}
