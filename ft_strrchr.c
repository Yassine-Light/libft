/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:51:03 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/15 07:19:56 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	car;

	i = ft_strlen(s);
	car = (char)c;
	while (i >= 0)
	{
		if (s[i] == car)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
