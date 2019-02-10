/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 10:41:21 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/28 10:56:48 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;

	if (s1 != 0 && s2 != 0)
	{
		str = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
		if (str == 0)
			return (0);
		str = ft_strcat(ft_strcat(str, s1), s2);
		return (str);
	}
	return (0);
}
