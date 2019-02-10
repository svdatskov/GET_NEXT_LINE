/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:27:10 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/25 18:24:57 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *in, const char *from)
{
	int	i;
	int	j;

	i = 0;
	if (*from == '\0')
		return ((char*)in);
	while (in[i] != '\0')
	{
		j = 0;
		if (in[i + j] == from[j])
		{
			while ((in[i + j] == from[j]) && in[i + j] != '\0')
				j++;
			if (from[j] == '\0')
				return ((char*)&in[i]);
		}
		i++;
	}
	return (NULL);
}
