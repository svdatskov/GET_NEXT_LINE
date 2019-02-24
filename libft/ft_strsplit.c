/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:37:38 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 15:37:40 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char *destptr, char *srcptr, int n)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = destptr;
	while (i < n && srcptr[i] != '\0')
	{
		destptr[i] = srcptr[i];
		i++;
	}
	destptr[i] = '\0';
	return (tmp);
}

static char	**ft_address(char **bufer, char *s, char c)
{
	char	**buf_tmp;
	char	*buf_str;
	char	*buf_str2;
	int		len;

	buf_tmp = bufer;
	while (*s)
	{
		len = 0;
		if (*s == c)
			s++;
		else
		{
			buf_str = s;
			while (*s && *s++ != c)
				len++;
			buf_str2 = malloc(sizeof(char) * (len + 1));
			if (buf_str2 == NULL)
				return (NULL);
			*bufer = ft_copy(buf_str2, buf_str, len);
			bufer++;
		}
	}
	*bufer = 0;
	return (buf_tmp);
}

char		**ft_strsplit(char const *s, char c)
{
	char	*tmp;
	char	**buff;
	int		str_count;

	if (!s)
		return (NULL);
	tmp = (char *)s;
	str_count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			str_count++;
			while (*s && *s != c)
				s++;
		}
	}
	buff = malloc(sizeof(char*) * (str_count + 1));
	if (buff == NULL)
		return (NULL);
	return (ft_address(buff, tmp, c));
}
