/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:32:27 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/19 10:32:29 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*res;	

	len = ft_strlen(s1);
	res = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (res == NULL)
		return (NULL);
	while (i <= len)
	{
		res[i] = s1[i];
		i++;
	}
	return (res);
}
