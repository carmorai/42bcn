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
	char	*res;

	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!res)
		return (0);
	ft_strlcpy (res, s1, ft_strlen(s1) + 1);
	return (res);
}
