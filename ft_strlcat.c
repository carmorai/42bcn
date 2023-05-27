/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:48:40 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/27 11:38:40 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (!dst && dstsize == 0)
	{
		return (slen);
	}
	d = ft_strlen(dst);
	dlen = d;
	if (dstsize <= dlen)
		return (dstsize + slen);
	s = 0;
	while (src[s] && d + 1 < dstsize)
	{
		dst[d++] = src[s++];
	}
	dst[d] = '\0';
	return (dlen + slen);
}
