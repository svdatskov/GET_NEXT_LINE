/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 17:43:58 by sdatskov          #+#    #+#             */
/*   Updated: 2018/12/30 18:21:19 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	big1(int b, size_t n)
{
	if (b == (int)n)
		return (1);
	else
		return (0);
}

int	big2(int b, int j, size_t i)
{
	if (b == j && (int)i == j)
		return (1);
	else
		return (0);
}

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		j;
	int		b;
	int		c;

	if (!s1 || !s2)
		return (0);
	i = 0;
	b = 0;
	c = 0;
	j = ft_strlen(s2);
	if ((int)n < j)
		c = 1;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n && (int)i <= j)
	{
		if (s1[i] == s2[i])
			b++;
		i++;
	}
	if (c == 1)
		return (big1(b, n));
	else
		return (big2(b, j, i));
}
