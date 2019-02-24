/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 19:11:54 by sdatskov          #+#    #+#             */
/*   Updated: 2018/12/30 19:11:56 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	temp = f(lst);
	new = temp;
	while (lst->next != NULL)
	{
		lst = lst->next;
		temp->next = f(lst);
		if (temp->next == NULL)
		{
			free(temp->next);
			return (NULL);
		}
		temp = temp->next;
	}
	return (new);
}
