/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:48:40 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/13 16:48:43 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	length;
	unsigned int	c;
	unsigned int	res_d;
	unsigned int	res_s;

	length = ft_strlen(dst);
	c = 0;
	res_d = ft_strlen(dst);
	res_s = ft_strlen(src);
	if (dstsize < 1)
		return (res_s + dstsize);
	while (src[c] && length < dstsize - 1)
	{
		dst[length] = src[c];
		length++;
		c++;
	}
	dst[length] = '\0';
	if (dstsize < res_d)
		return (res_s + dstsize);
	else
		return (res_d + res_s);
}
