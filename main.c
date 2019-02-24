/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanyliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 14:33:32 by vdanyliu          #+#    #+#             */
/*   Updated: 2018/12/24 17:16:06 by vdanyliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int fd1;
	int fd2;
	int fd3;
	char *line;
	char *str;
    int i;
    
    i = 13;
	line = NULL;
	fd1 = open("../war", O_RDONLY);
	//fd2 = open("../text2.txt", O_RDONLY);
	while (get_next_line(fd1, &line) > 0)
	{
		ft_putendl(line);
		free(line);
	}
	//while (i-- != 0)
    //{
    //    get_next_line(fd1, &line);
     //   ft_putendl(line);
     //   free(line);
        //get_next_line(fd2, &line);
        //ft_putendl(line);
        //free(line);
    //}
	system("leaks -q a.out");
	close(fd1);
	//close(fd2);
	return (0);
}
