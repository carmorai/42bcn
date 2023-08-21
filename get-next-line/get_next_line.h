/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren < carmoren@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:41:59 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/21 20:42:12 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *tmp, char *buf, size_t n);
size_t	ft_strchr(const char *s, int c, int n);
void	ft_strlcpy(char *dst, const char *src,
			size_t dstsize, unsigned int start);
char	*ft_strdup(const char *s1, size_t n, char *tmp);
char	*remove_string(char *tmp);
char	*create_string(char *tmp, char c, size_t n);
char	*create_nullstring(char **tmp, char *line);
char	*get_next_line(int fd);
char	*ft_free(char *tmp);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

#endif
