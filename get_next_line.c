/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdatskov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 15:05:11 by sdatskov          #+#    #+#             */
/*   Updated: 2019/01/04 17:44:51 by sdatskov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	lst_check(t_list **gnl_lst, int fd)
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

void    read_file(t_list *tmp_lst)
{
    int		read_size;
    char	buffer[BUFF_SIZE + 1];

    while (!ft_strchr(tmp_lst->content, '\n') || tmp_lst->content == NULL)
    {
        read_size = read(tmp_lst->content_size, buffer, BUFF_SIZE);
    	buffer[read_size] = '\0';
		if (tmp_lst->content == NULL)
			tmp_lst->content = ft_strdup(BUFF_SIZE + 1);
		else
			tmp_lst->content = ft_strcat(tmp_lst->content,buffer);
   	}

}



int				get_next_line(const int fd, char **line)
{
	static	t_list *gnl_lst;
	t_list  tmp_lst;
	char	buff[BUFF_SIZE + 1];

	if(fd < 0 || line == NULL || BUFF_SIZE < 1)
		return (-1);
	tmp_lst = lst_check(&gnl_lst, fd);
	if (tmp_lst == NULL)
    {
	    tmp_lst = lst_new(NULL, 0);
	    tmp_lst->content_size = fd;
	    ft_lstadd(gnl_lst, tmp_lst);
    }
    read_file(tmp_lst);
	if ((int)ft_strlen(tmp_lst->content) != 0)
	    return (1);
	else
	    return (0);
}
