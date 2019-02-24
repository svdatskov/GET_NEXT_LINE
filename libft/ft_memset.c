/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:59:36 by sdatskov          #+#    #+#             */
/*   Updated: 2018/10/28 15:59:38 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	char	*arr;
	size_t	i;

	i = 0;
	arr = (char *)memptr;
	while (i < num)
	{
		arr[i] = val;
		i++;
	}
	return (memptr);
}
