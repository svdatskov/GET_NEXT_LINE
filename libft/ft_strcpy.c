/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:12:38 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/30 16:34:54 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = ft_strlen(src);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	dest -= (sizeof(char) * i);
	return (dest);
}
