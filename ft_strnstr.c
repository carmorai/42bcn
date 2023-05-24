/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:33:29 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/19 10:33:30 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == NULL || *needle == '\0')
	{
		return ((char *)haystack);
	}
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
		}
		if (!needle[j])
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
