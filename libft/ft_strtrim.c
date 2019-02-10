/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 11:00:01 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/29 16:26:37 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_whitespasec(char s)
{
	if (s == ' ' || s == '\t' || s == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	if (s != 0)
	{
		i = 0;
		j = 0;
		while (ft_whitespasec(s[i]))
			i++;
		while (s[j])
			j++;
		j--;
		while (ft_whitespasec(s[j]))
			j--;
		if (j == -1)
			i = 0;
		str = ft_strnew(j - i + 1);
		if (str == 0)
			return (0);
		str = ft_strncpy(str, (s + sizeof(char) * i), (j - i + 1));
		return (str);
	}
	return (0);
}
