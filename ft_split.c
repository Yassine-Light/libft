/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:48:02 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/19 07:54:28 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_array(size_t elem, char **splitted)
{
	size_t	i;

	if (!splitted)
		return (NULL);
	i = 0;
	while (i < elem)
	{
		free(splitted[i]);
		i++;
	}
	free(splitted);
	return (NULL);
}

static char	**fill_split(size_t elem, char const *s, char c, char **splitted)
{
	size_t	j;
	size_t	i;
	size_t	start;

	i = 0;
	j = 0;
	while (i < elem)
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		splitted[i] = ft_substr(s, start, j - start);
		if (!splitted[i])
			free_array(i, splitted);
		i++;
	}
	splitted[i] = NULL;
	return (splitted);
}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	size_t	count;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	splitted = malloc(sizeof(char *) * (count + 1));
	if (!splitted)
		return (NULL);
	return (fill_split(count, s, c, splitted));
}
