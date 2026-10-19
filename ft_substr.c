/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:16:13 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/19 09:09:04 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handle_out_of_bound(void)
{
	char	*sub;

	sub = malloc(0);
	if (!sub)
		return (NULL);
	sub[0] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	len_src;

	if (!s)
		return (NULL);
	len_src = ft_strlen(s);
	if (start >= len_src)
		return (handle_out_of_bound());
	sub = malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
