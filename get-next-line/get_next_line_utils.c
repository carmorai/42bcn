/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren < carmoren@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:41:43 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/21 20:42:10 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	unsigned int	c;

	c = 0;
	if (s == NULL)
		return (0);
	while (s[c])
		c++;
	return (c);
}

void	ft_strlcpy(char *dst, const char *src,
			size_t dstsize, unsigned int start)
{
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (dstsize != 0)
	{
		while (j < (dstsize - 1))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
	}
	dst[j] = '\0';
}

size_t	ft_strchr(const char *s, int c, int n)
{	
	int			i;

	i = 0;
	if (!s || n == 0)
		return (0);
	while (i < n)
	{
		if (s[i] == (char)c)
			return (i + 1);
		i++;
	}
	return (0);
}

char	*ft_strdup(const char *s1, size_t n, char *tmp)
{	
	tmp = (char *)malloc(sizeof (char) * (n + 1));
	if (!tmp)
		return (NULL);
	ft_strlcpy(tmp, s1, n + 1, 0);
	return (tmp);
}

char	*ft_strjoin(char *tmp, char *buf, size_t n)
{
	char		*join;
	int			i;
	int			j;

	j = 0;
	i = 0;
	if (ft_strlen(tmp) == 0)
		return (ft_strdup((const char *) buf, n, tmp));
	join = (char *)malloc(sizeof (char) * (ft_strlen(tmp) + n + 1));
	if (!join)
		return (ft_free(tmp));
	while (tmp[j])
		join[i++] = tmp[j++];
	j = 0;
	while (n)
	{
		join[i++] = buf[j++];
		n--;
	}
	join[i] = '\0';
	free (tmp);
	tmp = NULL;
	return (join);
}
