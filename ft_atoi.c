/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 07:55:26 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/15 11:27:39 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || (c == ' '));
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		atoi = atoi * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * atoi);
}
