/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:33:13 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 14:33:17 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int symbol)
{
	int i;
	int s;

	s = ft_strlen(string);
	i = 0;
	while (i <= s)
	{
		if (string[i] == symbol)
			return ((char *)string + i);
		i++;
	}
	return (0);
}
