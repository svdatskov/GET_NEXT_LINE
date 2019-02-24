/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:28:18 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 15:28:20 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destptr, const void *srcptr, size_t num)
{
	char	*dest;
	char	*src;
	size_t	i;

	i = 0;
	dest = (char *)destptr;
	src = (char *)srcptr;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
