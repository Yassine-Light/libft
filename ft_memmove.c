/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:23:19 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/14 17:30:56 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dptr;
    const unsigned char *sptr;
    size_t i;

    dptr = (unsigned char *)dest;
    sptr = (unsigned char *)src;
    i = 0;
    if (dptr > sptr)
    {
        while (n > 0)
        {
            dptr[n] = sptr[n];
            n--;
        }
    }else{
        dptr[i] = sptr[i];
        i++;
    }
    return (dest);
}
