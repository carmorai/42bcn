/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:47:27 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/13 16:47:29 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	if ((char)c == '\0' && s[size] == '\0')
		return (&((char *)s)[size]);
	while (size > 0)
	{
		size--;
		if (s[size] == (char)c)
			return (&((char *)s)[size]);
	}
	return (0);
}
