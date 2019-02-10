/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:56:49 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/30 17:26:15 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *in, const char *from, size_t len)
{
	char	*in1;
	char	*from1;
	int		i;

	if (*from == '\0')
		return ((char*)in);
	while (*in && (int)len-- > 0)
	{
		if (*in == *from)
		{
			in1 = (char*)in;
			from1 = (char*)from;
			i = (int)len + 1;
			while (*from1 == *in1++ && *from1 && i-- > 0)
				from1++;
			if (!*from1 && i > -1)
				return ((char*)in);
		}
		in++;
	}
	return (0);
}
