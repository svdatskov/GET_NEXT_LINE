/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:48:11 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/29 16:03:56 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if ((int)size <= i)
		return (size + j);
	str = dst;
	while (*str)
	{
		str++;
		size--;
	}
	while (*src && (size-- > 1))
	{
		*str++ = *src++;
	}
	*str = '\0';
	return (i + j);
}
