/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 11:12:46 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/28 15:25:59 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	rev;

	if (str != 0)
	{
		len = 0;
		while (str[len] != '\0')
			len++;
		i = 0;
		while (i < (len - 1))
		{
			rev = str[i];
			str[i] = str[(len - 1)];
			str[(len - 1)] = rev;
			len--;
			i++;
		}
		return (str);
	}
	return (0);
}
