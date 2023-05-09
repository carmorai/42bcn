/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:29:07 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/09 12:01:19 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memset(void *memoria, int c, size_t bytes)
{
	size_t i;

	i = 0; 
	while (i < bytes)
	{
			((unsigned char *)memoria)[i] = (unsigned char)c;
			i++;
	}
	return (0);
}
