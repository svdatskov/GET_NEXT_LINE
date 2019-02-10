/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:41:45 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/25 14:44:32 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = ft_strlen(s);
	dup = (char*)malloc(sizeof(char) * (i + 1));
	if (dup == 0)
		return (0);
	while (*s)
		*dup++ = *s++;
	*dup = '\0';
	dup = dup - (sizeof(char) * i);
	return (dup);
}
