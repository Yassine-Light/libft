/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:31:09 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/15 10:59:22 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*unique;
	size_t	total_size;
	void	*cal;

	if (nmemb == 0 || size == 0)
	{
		unique = malloc(0);
		return (unique);
	}
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;
	cal = malloc(total_size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, total_size);
	return (cal);
}
