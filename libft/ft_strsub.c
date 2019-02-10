/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 20:20:28 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/28 10:59:32 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	if (s != 0)
	{
		str = ft_strnew(len);
		if (str == 0)
			return (0);
		i = 0;
		while (i++ < (int)start)
			s++;
		str = ft_strncpy(str, s, ((int)len));
		return (str);
	}
	return (0);
}
