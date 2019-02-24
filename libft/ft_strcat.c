/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:16:57 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/27 17:16:59 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destptr, const char *srcptr)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (destptr[i] != '\0')
		while (destptr[i] != '\0')
			++i;
	if (destptr[i] == '\0')
	{
		while (srcptr[j] != '\0')
			destptr[i++] = srcptr[j++];
	}
	destptr[i] = '\0';
	return (destptr);
}
