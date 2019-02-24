/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:31:39 by sdatskov          #+#    #+#             */
/*   Updated: 2018/11/04 14:31:42 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;
	size_t	j;

	if (!s)
		return ;
	i = 0;
	j = ft_strlen(s);
	while (s[i] != '\0')
		ft_putchar_fd(s[i++], fd);
}
