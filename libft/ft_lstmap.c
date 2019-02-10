/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:30:20 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/10/29 16:05:07 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start;
	t_list *list;
	t_list *dup;

	if (!lst || !f)
		return (0);
	dup = f(lst);
	start = ft_lstnew(dup->content, dup->content_size);
	if (!start)
		return (0);
	list = start;
	lst = lst->next;
	while (lst)
	{
		dup = f(lst);
		list->next = ft_lstnew(dup->content, dup->content_size);
		list = list->next;
		lst = lst->next;
	}
	return (start);
}
