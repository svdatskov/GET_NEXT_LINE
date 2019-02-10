/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:02:21 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/25 16:12:55 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j = n;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while ((*src != '\0') && (j > 0))
	{
		*dest++ = *src++;
		i++;
		j--;
	}
	*dest = '\0';
	dest -= (sizeof(char) * i);
	return (dest);
}
