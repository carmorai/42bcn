/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:34:03 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/19 10:34:06 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if (s == NULL)
		return (0);
	if (start > ft_strlen(s))
	{
		res = malloc(1);
		if (res == NULL)
			return (0);
		res[0] = '\0';
		return (res);
	}
	if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (start < ft_strlen(s) && i < len && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
