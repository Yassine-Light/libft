/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:28:44 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/14 18:57:25 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	car;

	i = 0;
	car = (char)c;
	while (1)
	{
		if (s[i] == '\0' && car != '\0')
			break ;
		if (s[i] == car)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
