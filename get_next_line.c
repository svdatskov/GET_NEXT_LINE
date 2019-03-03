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

static t_gnl	*lst_check(t_gnl **gnl_lst, int fd)
{
	t_gnl *buff;
	if ((*gnl_lst) == NULL)
	{
		(*gnl_lst) = (t_gnl*)malloc(sizeof(buff));
		(*gnl_lst)->fd = fd;
		(*gnl_lst)->content = ft_strdup("");
        (*gnl_lst)->next = NULL;
		return ((*gnl_lst));
	}
	buff = *gnl_lst;
	while (buff->next != NULL)
	{
		if (buff->fd == fd)
			return (buff);
		buff = buff->next;
	}
	if (buff->fd == fd)
		return (buff);
	buff->next = (t_gnl*)malloc(sizeof(buff));
	buff->next->fd = fd;
	buff->next->content = ft_strdup("");
	buff->next->next = NULL;
	return (buff->next);
}

static char 	*gnl_writer(char *str)
{
	char	*buff;
	char 	*line;

	buff = str;
	while (*buff && *buff != '\n')
		buff++;
	line = ft_strsub(str, 0, (buff - str));
	return (line);
}

static void		gnl_rewrite(t_gnl *fd_head)
{
	char	*buff;
	char	*leak;
	char    *str;

	str = fd_head->content;
	buff = str;
	while (*buff && *buff != '\n')
		buff++;
	if (*buff == '\0' || *(buff + 1) == '\0')
	{
		free(str);
		str = ft_strdup("");
	}
	leak = str;
	fd_head->content = ft_strdup(buff + 1);
	free(leak);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*gnl_lst = NULL;
	t_gnl			*fd_line;
	char			buff[BUFF_SIZE + 1];
	int 			i;
	char			*leak;

	if (fd < 0 || (read(fd, NULL, 0) < 0) || !line)
		return (-1);
	fd_line = lst_check(&gnl_lst, fd);
	if (fd_line->content != NULL && ft_strchr(fd_line->content, '\n') == 0)
	{
		while ((i = read(fd, buff, BUFF_SIZE)) > 0)
		{
			buff[i] = '\0';
			leak = fd_line->content;
			fd_line->content = ft_strjoin(fd_line->content, buff);
			free(leak);
			if (ft_strchr(buff, '\n') != 0)
				break ;
		}
	}
	*line = gnl_writer(fd_line->content);
	if (ft_strlen(*line) == 0 && ft_strlen(fd_line->content) == 0)
		return (0);
	gnl_rewrite(fd_line);
	return (1);
}