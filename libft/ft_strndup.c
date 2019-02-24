/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:00:45 by sdatskov          #+#    #+#             */
/*   Updated: 2019/01/06 12:00:50 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*c;
	size_t	j;

	j = ft_strlen(s1);
	if (n >= j)
	{
		c = malloc(sizeof(char) * (j + 1));
		if (c == 0)
			return (0);
		ft_strcpy(c, s1);
	}
	else
	{
		c = malloc(sizeof(char) * (n + 1));
		if (c == 0)
			return (0);
		ft_strncpy(c, s1, n);
	}
	return (c);
}
