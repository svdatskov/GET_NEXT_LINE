/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:37:38 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 15:37:40 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		b;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	b = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(malloc(sizeof(char) * 2), ""));
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b--;
	str = (char *)malloc(sizeof(char) * (b - (i - 1) + 1));
	if (!str)
		return (NULL);
	while (i <= b)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
