/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:44:27 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/29 17:58:26 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *ss1, const char *ss2)
{
	unsigned char *s1;
	unsigned char *s2;

	s1 = (unsigned char*)ss1;
	s2 = (unsigned char*)ss2;
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
