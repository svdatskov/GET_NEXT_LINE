/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 16:45:43 by sdatskov          #+#    #+#             */
/*   Updated: 2018/12/30 18:19:22 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int	j;
	int	b;

	if (!s1 || !s2)
		return (0);
	i = 0;
	b = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			b++;
		i++;
	}
	if (i == j && b == j)
		return (1);
	else
		return (0);
}
