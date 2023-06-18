/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lft.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armgevor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:26:27 by armgevor          #+#    #+#             */
/*   Updated: 2023/06/11 11:26:29 by armgevor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	llen(const char *s)
{
	int	i;

	i = 0;
	if (s)
		while (*s++ != '\0')
			i++;
	return ((size_t)i);
}

char	*join(char *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*news;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	j = 0;
	len = llen(s1) + llen(s2);
	news = (char *)malloc ((len + 2) * (sizeof(char)));
	if (!news)
		return (NULL);
	while (s1 && s1[j])
		news[i++] = s1[j++];
	if (i != 0)
		news[i++] = ' ';
	j = 0;
	while (s2 && s2[j])
		news[i++] = (char)s2[j++];
	news[i] = '\0';
	if (s1)
		free(s1);
	return (news);
}

int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= llen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == llen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
