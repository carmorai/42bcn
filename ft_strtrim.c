/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:33:51 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/26 14:07:48 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strrchr(set, s1[i]))
		i--;
	cpy = ft_substr(s1, 0, i + 1);
	return (cpy);
}
