/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:11:58 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/06 12:12:02 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// Get next line
char	*get_next_line(int fd);
char	*ft_buffertrim(char *buffer);
char	*ft_getline(char *buffer);
char	*ft_readline(int fd, char *temp_line);

// Utils
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
size_t	ft_strlen(char *str);

#endif
