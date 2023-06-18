/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:50:41 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/02 04:50:42 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fr_exit_str(char *str)
{
	free(str);
	write(1, "Error\n", 6);
	exit(1);
}

void	ft_strstr(const char *h)
{
	size_t	i;
	size_t	j;

	i = -1;
	while (h[++i])
	{
		j = -1;
		while (++j < 14)
			if (h[i] == "0123456789 +-"[j])
				break ;
		if ((h[i] == '-' || h[i] == '+') && (h[i + 1] < 48 || h[i + 1] > 57))
			fr_exit_str(NULL);
		if (j == 14)
			fr_exit_str(NULL);
	}
}

int	no_dup(int *tver, int n)
{
	int	i;
	int	j;

	i = 0;
	while (++i < n)
	{
		j = -1;
		while (++j < i)
			if (tver[j] == tver[i])
				return (0);
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	tiv;
	int	i;
	int	nshan;

	i = 0;
	tiv = 0;
	nshan = 1;
	while (str && (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')))
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		if (str[i++] == '-')
			nshan = -1;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		if ((tiv == 214748364
				&& ((nshan == 1 && str[i] > '7')
					|| (nshan == -1 && str[i] == '9')))
			|| tiv >= 1000000000)
			fr_exit_str(NULL);
		tiv = tiv * 10 + str[i++] - 48;
	}
	if (str[i])
		fr_exit_str(NULL);
	return (nshan * (int)tiv);
}

int	maximum(t_list **list)
{
	int		i;
	int		j;
	int		max;
	t_list	*lst;

	i = 0;
	j = 0;
	lst = *list;
	max = lst->index;
	lst = lst->next;
	while (lst)
	{
		if (max < lst->index)
		{
			max = lst->index;
			lst = lst->next;
			j = ++i;
		}
		else
		{
			lst = lst->next;
			i++;
		}
	}
	return (j);
}
