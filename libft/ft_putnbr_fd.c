/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:33:29 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/31 14:57:55 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			i;
	int long	nb;
	char		buf[20];
	int			j;

	nb = n;
	i = 0;
	j = ft_charcount(n);
	if (n < 0)
	{
		nb *= -1;
		buf[--j] = '-';
	}
	while (i < j)
	{
		buf[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		i++;
	while (--i > -1)
		ft_putchar_fd(buf[i], fd);
}
