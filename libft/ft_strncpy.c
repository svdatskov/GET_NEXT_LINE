/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:13:40 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/11/02 13:15:28 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	int j;
	int k;

	i = ft_strlen(src);
	k = n;
	j = 0;
	if (k >= i)
	{
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		while (j < k)
			dest[j++] = '\0';
		return (dest);
	}
	while (j < k)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
