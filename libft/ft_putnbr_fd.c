/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:24:31 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 15:24:33 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pr(int i, int n, int fd)
{
	int j;

	while (i >= 1)
	{
		j = n / i;
		ft_putchar_fd(j + 48, fd);
		n %= i;
		i /= 10;
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int i;
	int num;

	num = n;
	i = 1;
	while (num > 9 || num < -9)
	{
		i *= 10;
		num /= 10;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -2147483647)
		{
			ft_putchar_fd('2', fd);
			n = -147483648;
			i /= 10;
		}
		n = -n;
	}
	ft_pr(i, n, fd);
}
