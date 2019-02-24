/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/30 17:20:40 by sdatskov          #+#    #+#             */
/*   Updated: 2018/12/30 17:20:42 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;
	t_list *temp;

	temp = *alst;
	if (del != NULL)
	{
		while (temp != NULL)
		{
			del(temp->content, temp->content_size);
			next = temp->next;
			free(temp);
			temp = next;
		}
		*alst = NULL;
	}
}
