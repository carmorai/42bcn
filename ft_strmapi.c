/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:33:07 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/19 10:33:09 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	if (!s || !f)
		return (0);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	while (s[i])
	{
	res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
