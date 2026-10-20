/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaghrib <ylaghrib@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:01:34 by ylaghrib          #+#    #+#             */
/*   Updated: 2026/10/20 12:14:44 by ylaghrib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	snbr[12];
	int		i;

	if (fd == -1)
		return ;
	nb = n;
	i = 0;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	while (nb > 0)
	{
		snbr[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
		write(fd, &snbr[--i], 1);
}
