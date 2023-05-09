/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:23:25 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/04 12:39:19 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	tamcadena;

	tamcadena = 0;
	while (s[tamcadena] != '\0')
	{
		tamcadena++;
	}
	return (tamcadena);
}
