/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:54:40 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/15 18:07:22 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	src_len;
	char	*dup;

	src_len = ft_strlen(s);
	dup = malloc(sizeof(char) * (src_len + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, src_len + 1);
	return (dup);
}
