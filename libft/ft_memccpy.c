/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 16:25:42 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/27 19:26:13 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	while (i++ < n)
	{
		*str1 = *str2;
		if (*str1 == (unsigned char)c)
			return (++str1);
		str1++;
		str2++;
	}
	return (NULL);
}
