/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:09:31 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 19:21:21 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_appendix(int i, int n, int b, char *str)
{
	int j;

	if (n < 0)
	{
		str[b++] = '-';
		if (n < -2147483647)
		{
			str[b++] = '2';
			n = -147483648;
			i /= 10;
		}
		n = -n;
	}
	while (i >= 1)
	{
		j = n / i;
		str[b] = j + 48;
		n %= i;
		i /= 10;
		b++;
	}
	str[b] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	int		num;
	int		len;
	int		b;
	char	*str;

	num = n;
	b = 0;
	i = 1;
	len = 1;
	while (num > 9 || num < -9)
	{
		i *= 10;
		num /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * len + (n < 0 ? 2 : 1));
	if (!str)
		return (NULL);
	ft_appendix(i, n, b, str);
	return (str);
}
