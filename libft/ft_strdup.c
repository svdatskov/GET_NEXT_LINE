/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:00:02 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/24 16:28:27 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *src)
{
	char *c;

	c = (char *)malloc(ft_strlen(src) + 1);
	if (c == 0)
		return (0);
	ft_strcpy(c, src);
	return (c);
}
