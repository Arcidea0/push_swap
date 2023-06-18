/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 09:11:24 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/04 09:11:29 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./bonus/get_next_line.h"

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

void		push(t_list **a, t_list **b);
void		rotate(t_list **stack);
void		rev_rot(t_list **stack);
void		swap(t_list **stack);
void		swap(t_list **stack);
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);
int			stack_chap(t_list *stack);
t_list		*stacki_verj(t_list *stack);
t_list		*stacki_naxaverj(t_list *stack);
size_t		llen(const char *s);
char		*join(char *s1, char const *s2);
char		**ft_split(char const *s, char c);
int			ft_atoi(char *str);
void		ft_strstr(const char *h);
int			no_dup(int *tver, int n);
void		into_list(int *tver, t_list **a, int len);
void		sort_int(t_list *list, int len, int i);
void		ft_lstadd_back(t_list **lst, t_list *New);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		sorting_ab(t_list **a, t_list **b, int n);
void		sorting_ba(t_list **a, t_list **b, int len);
void		tpox(t_list *st);
int			generater(int len);
int			maximum(t_list **list);
void		minusacum(t_list **lst);
void		fr_exit_str(char *str);
int			is_sorted(int *x, int len);
int			find_min(t_list *a);
void		sortavorum(t_list **a, t_list **b, int len);
void		erku(t_list **a);
void		ereq(t_list	**a);
void		chors(t_list **a, t_list **b);
void		hing(t_list **a, t_list **b);
int			count_words(const char *str, char c);
char		*word_dup(const char *str, int start, int finish);
int			is_sorted_list(t_list *a);
int			ft_strncmp(const char *a, const char *b, size_t n);
void		functions(t_list **a, t_list **b, char *str);
void		free_split(char **spabc);
int			*bparsing(char *abc, int *len);
void		bsa(t_list **a);
void		bsb(t_list **b);
void		bss(t_list **a, t_list **b);
void		bpa(t_list **a, t_list **b);
void		bpb(t_list **a, t_list **b);
void		bra(t_list **a);
void		brb(t_list **b);
void		brr(t_list **a, t_list **b);
void		brra(t_list **a);
void		brrb(t_list **b);
void		brrr(t_list **a, t_list **b);

#endif
