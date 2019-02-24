/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:15:41 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 15:15:43 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	int i;
	int s;

	s = ft_strlen(string);
	i = 0;
	if (symbol == 0)
		return ((char *)string + s);
	while (s >= i)
	{
		if (string[s] == symbol)
			return ((char *)string + s);
		s--;
	}
	return (0);
}
