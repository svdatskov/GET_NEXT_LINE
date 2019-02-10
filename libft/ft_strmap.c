/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:37:07 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/27 19:49:53 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	if (s != 0)
	{
		i = ft_strlen(s);
		str = ft_strnew(i);
		if (str == 0)
			return (0);
		while (*s)
			*str++ = f(*s++);
		return (str - i);
	}
	return (0);
}
