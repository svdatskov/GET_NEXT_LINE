/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:00:27 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/27 15:49:34 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *strdest;
	unsigned char *strsrc;

	strdest = (unsigned char*)dest;
	strsrc = (unsigned char*)src;
	if (dest < src)
	{
		while (n-- > 0)
		{
			*strdest++ = *strsrc++;
		}
	}
	else
	{
		while ((int)--n >= 0)
			strdest[n] = strsrc[n];
	}
	return (dest);
}
