/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:31:14 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/19 10:31:17 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1 = (const unsigned char *)s1;
	const unsigned char	*p2 = (const unsigned char *)s2;
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (p1[i] < p2[i])
			return (-1);
		else if (p1[i] > p2[i])
			return (1);
		i++;
	}
	return (0);
}
