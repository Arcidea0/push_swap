/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:48:44 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/13 17:48:50 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*bparsing(char *abc, int *len)
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
		fr_exit_str(NULL);
	tver = malloc(sizeof(int) * (*len));
	if (!tver)
		return (0);
	i = -1;
	while (spabc[++i])
		tver[i] = ft_atoi(spabc[i]);
	free_split(spabc);
	return (tver);
}

void	jshtutyun(t_list *a, t_list *b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str || !(*str))
		{
			if (!is_sorted_list(a) && !b)
			{
				write (1, "OK\n", 3);
				exit(1);
			}
			else if (is_sorted_list(a) || b)
			{
				write (1, "K0\n", 3);
				exit(1);
			}
		}
		else
			functions(&a, &b, str);
		free(str);
	}
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
	len = 0;
	while (++len < c)
		abc = join(abc, v[len]);
	tver = bparsing(abc, &len);
	if (!no_dup(tver, len))
		fr_exit_str(NULL);
	if (!is_sorted(tver, len))
	{
		write(1, "OK\n", 3);
		exit(0);
	}
	into_list(tver, &a, len);
	jshtutyun(a, b);
	return (0);
}
