/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 18:06:55 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/27 18:06:57 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destptr, const char *srcptr, size_t num)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (destptr[i] != '\0')
		while (destptr[i] != '\0')
			++i;
	if (destptr[i] == '\0')
	{
		while (srcptr[j] != '\0' && j < num)
			destptr[i++] = srcptr[j++];
	}
	destptr[i] = '\0';
	return (destptr);
}
