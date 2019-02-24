/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minimum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/06 15:11:52 by sdatskov          #+#    #+#             */
/*   Updated: 2019/01/06 15:15:50 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_minmax(int a, int b, char point)
{
	if (point == '<')
		return (a < b ? a : b);
	else if (point == '>')
		return (a > b ? a : b);
	else
		return (0);
}
