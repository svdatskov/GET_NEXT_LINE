/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 15:05:11 by vdanyliu          #+#    #+#             */
/*   Updated: 2019/01/04 17:44:51 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	lst_check(t_list **gnl_lst, inf fd)
{
	t_list *tmp_lst;

	tmp_lst = *gnl_lst;
	while (tmp_lst != NULL) {
		if ((int) tmp_lst->content_size == fd)
			return (tmp_lst);
		tmp_lst = tmp_lst->next;
	}
	    return (NULL);
}

int				get_next_line(const int fd, char **line)
{
	static	t_list *gnl_lst;
	t_list  tmp_lst;
	char	buff[BUFF_SIZE + 1];

	if(fd < 0 || line == NULL || BUFF_SIZE < 1 || read(fd, buff, 0) < 0)
		return (-1);
	tmp_lst = lst_check(&gnl_lst, fd);
	if (tmp_lst == NULL)
    {
	    tmp_lst = lst_new(NULL, 0);
	    tmp_lst.content_size = fd;
	    ft_lstadd(gnl_lst, tmp_lst);
    }
}
