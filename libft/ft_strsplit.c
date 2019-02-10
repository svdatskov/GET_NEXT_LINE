/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:06:59 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/31 14:07:31 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static		**ft_free(char **arr_adr)
{
	while (**arr_adr)
	{
		free(*arr_adr);
		arr_adr++;
	}
	return (0);
}

char static		**ft_get_adr(char **arr_adr, char const *s, char c)
{
	int			l;
	char		**buf_arr_adr;
	char const	*buf_s;

	buf_arr_adr = arr_adr;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			l = 0;
			buf_s = s;
			while (*s != c && *s)
			{
				l++;
				s++;
			}
			if (!(*arr_adr = ft_strncpy(ft_strnew(l), buf_s, l)))
				return (ft_free(buf_arr_adr));
			arr_adr++;
		}
	}
	*arr_adr = 0;
	return (buf_arr_adr);
}

char			**ft_strsplit(char const *s, char c)
{
	char const	*stmp;
	char		**dud;
	int			i;

	if (s == 0)
		return (0);
	stmp = s;
	i = 0;
	while (*s)
	{
		if (*s == c)
			while (*s == c)
				s++;
		else
		{
			i++;
			while (*s != c && *s)
				s++;
		}
	}
	i++;
	dud = (char**)malloc(sizeof(char*) * i);
	if (dud == 0)
		return (0);
	return (ft_get_adr(dud, stmp, c));
}
