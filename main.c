/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:46:20 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/06 13:50:16 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);

int	main(void)
{
	int		fd;
	int		fd_two;
	int		index;
	char	*gnl;

	fd = open("test.txt", O_RDONLY);
	fd_two = open("test", O_RDONLY);
	index = 9;
	while (index--)
	{
		gnl = get_next_line(fd);
		if (gnl)
			printf("%s", gnl);
		else
			printf("%s", "NULL");
		free(gnl);
		gnl = get_next_line(fd_two);
		if (gnl)
			printf("%s", gnl);
		else
			printf("%s", gnl);
		free(gnl);
	}
	close(fd);
}
