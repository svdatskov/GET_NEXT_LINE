/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_purnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:37:38 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 15:37:40 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print(int i, int n)
{
	int j;

	while (i >= 1)
	{
		j = n / i;
		ft_putchar(j + 48);
		n %= i;
		i /= 10;
	}
}

void		ft_putnbr(int n)
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
		ft_putchar('-');
		if (n < -2147483647)
		{
			ft_putchar('2');
			n = -147483648;
			i /= 10;
		}
		n = -n;
	}
	ft_print(i, n);
}
