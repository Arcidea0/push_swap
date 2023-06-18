/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <armgevor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 04:49:34 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/02 19:01:26 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*parsing(char *abc, int *len)
{
	int		i;
	int		*tver;
	char	**spabc;

	i = 0;
	ft_strstr(abc);
	spabc = ft_split(abc, ' ');
	i = 0;
	while (spabc && spabc[i])
		i++;
	*len = i;
	if (*len < 2)
		exit(1);
	tver = malloc(sizeof(int) * (*len));
	if (!tver)
		return (0);
	i = -1;
	while (spabc[++i])
		tver[i] = ft_atoi(spabc[i]);
	free_split(spabc);
	return (tver);
}

int	main(int c, char **v)
{
	int		len;
	t_list	*a;
	t_list	*b;
	char	*abc;
	int		*tver;

	a = NULL;
	b = NULL;
	if (c == 1)
		exit(1);
	abc = NULL;
	tver = NULL;
	len = 0;
	while (++len < c)
		abc = join(abc, v[len]);
	tver = parsing(abc, &len);
	if (!no_dup(tver, len))
		fr_exit_str(NULL);
	if (!is_sorted(tver, len))
		exit(1);
	into_list(tver, &a, len);
	sort_int(a, len, -1);
	sortavorum(&a, &b, len);
	return (0);
}

void	sortavorum(t_list **a, t_list **b, int len)
{
	if (len == 2)
		erku(a);
	else if (len == 3)
		ereq(a);
	else if (len == 4)
		chors(a, b);
	else if (len == 5)
		hing(a, b);
	else
	{
		sorting_ab(a, b, generater(len));
		sorting_ba(a, b, len);
	}
}
