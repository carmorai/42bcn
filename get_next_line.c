/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:09:56 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/06 12:10:13 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_readline(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_getline(buffer);
	buffer = ft_buffertrim(buffer);
	return (line);
}

char	*ft_buffertrim(char *buffer)
{
	size_t	buffer_index;
	size_t	line_index;
	char	*line;

	buffer_index = 0;
	line_index = 0;
	while (buffer[buffer_index] != '\n' && buffer[buffer_index])
		buffer_index++;
	if (!buffer[buffer_index])
	{
		free(buffer);
		return (NULL);
	}
	line = ft_calloc(ft_strlen(buffer) - buffer_index + 1, sizeof(char));
	buffer_index++;
	while (buffer[buffer_index])
		line[line_index++] = buffer[buffer_index++];
	free(buffer);
	return (line);
}

char	*ft_getline(char *buffer)
{
	char	*line;
	size_t	index;

	index = 0;
	if (!buffer[index])
		return (NULL);
	while (buffer[index] != '\n' && buffer[index])
		index++;
	line = ft_calloc(index + 2, sizeof(char));
	index = 0;
	while (*buffer != '\n' && *buffer)
		line[index++] = *buffer++;
	if (*buffer == '\n')
		line[index] = '\n';
	return (line);
}

char	*ft_readline(int fd, char *buffer)
{
	char	*temp_buffer;
	char	*read_buffer;
	ssize_t	bytes_read;

	if (!buffer)
		buffer = ft_calloc(1, sizeof(char));
	temp_buffer = buffer;
	read_buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	bytes_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(read_buffer);
			free(temp_buffer);
			return (NULL);
		}
		read_buffer[bytes_read] = '\0';
		temp_buffer = buffer;
		buffer = ft_strjoin(temp_buffer, read_buffer);
		free(temp_buffer);
	}
	free(read_buffer);
	return (buffer);
}
