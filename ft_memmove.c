/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:23:19 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/17 09:23:10 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dptr;
	const unsigned char	*sptr;

	if (n == 0 || dest == src)
		return (dest);
	dptr = (unsigned char *)dest;
	sptr = (unsigned char *)src;
	if (dptr > sptr)
	{
		while (n > 0)
		{
			n--;
			dptr[n] = sptr[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
