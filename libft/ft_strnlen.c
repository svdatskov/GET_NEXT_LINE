/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 12:08:39 by sdatskov          #+#    #+#             */
/*   Updated: 2019/01/06 12:08:41 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strnlen(const char *str, size_t maxlen)
{
	size_t i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	if (i < maxlen)
		return (i);
	else
		return (maxlen);
}
