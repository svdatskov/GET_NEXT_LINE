/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:13:10 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/25 17:22:08 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*adr;
	int		i;

	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			i = 1;
			adr = (char*)s;
		}
		s++;
	}
	if (*s == c)
	{
		i = 1;
		adr = (char*)s;
	}
	if (i == 1)
		return (adr);
	return (NULL);
}
