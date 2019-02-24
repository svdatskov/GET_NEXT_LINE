/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 13:38:48 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 13:38:50 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] && (i + j) < len)
	{
		j = 0;
		while (find[j] == s[i + j] && (i + j < len))
		{
			j++;
			if (find[j] == '\0')
				return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}
