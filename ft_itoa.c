/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:51:42 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/19 11:44:40 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	count_num(long n)
{
	long	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static char	*fill_itoa(char *itoa, long nb, int len)
{
	int	i;

	i = len - 1;
	while (nb > 0)
	{
		itoa[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	long	len;
	long	nb;

	nb = n;
	len = count_num(nb);
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	itoa[len] = '\0';
	if (nb == 0)
	{
		itoa[0] = '0';
		return (itoa);
	}
	if (nb < 0)
	{
		nb *= -1;
		itoa[0] = '-';
	}
	return (fill_itoa(itoa, nb, len));
}
