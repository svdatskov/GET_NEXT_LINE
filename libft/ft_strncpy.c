/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 18:49:09 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/26 18:49:11 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(srcptr);
	if (j <= num)
	{
		while (i < num)
		{
			if (i < j)
				destptr[i] = srcptr[i];
			else if (i < num)
				destptr[i] = '\0';
			i++;
		}
		return (destptr);
	}
	while (i < num)
	{
		destptr[i] = srcptr[i];
		i++;
	}
	return (destptr);
}
