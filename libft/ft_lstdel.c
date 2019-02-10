/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:15:30 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/29 16:15:34 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;
	t_list *next;

	list = *alst;
	while (list)
	{
		next = list->next;
		ft_lstdelone(&list, *del);
		list = next;
	}
	*alst = 0;
}
