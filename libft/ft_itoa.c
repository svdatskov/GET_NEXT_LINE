/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:29:50 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/31 11:39:01 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrevitoa(char *str)
{
	if (!str)
		return (0);
	return (ft_strrev(str));
}

char		*ft_itoa(int n)
{
	char		*str;
	char		*buf;
	int			i;
	long int	nb;

	i = 0;
	nb = n;
	if (!(str = ft_strnew(ft_charcount(n))))
		return (0);
	buf = str;
	if (n < 0)
	{
		i = 1;
		nb *= -1;
	}
	if (n == 0)
		*str = '0';
	while (nb != 0)
	{
		*str++ = nb % 10 + '0';
		nb /= 10;
	}
	if (i == 1)
		*str = '-';
	return (ft_strrevitoa(buf));
}
