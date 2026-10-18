/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:24:47 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/18 11:07:49 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_edge(void)
{
	char	*trim;

	trim = malloc(0);
	if (!trim)
		return (NULL);
	trim[0] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (handle_edge());
	end--;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (handle_edge());
	trim = malloc(sizeof(char) * (end - start + 2));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, end - start + 2);
	return (trim);
}
