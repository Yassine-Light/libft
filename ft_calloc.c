/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:31:09 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/16 10:53:40 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	total_size;
	void	*cal;

	if (elsize != 0 && nelem > (size_t)-1 / elsize)
		return (NULL);
	total_size = nelem * elsize;
	cal = malloc(total_size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, total_size);
	return (cal);
}
