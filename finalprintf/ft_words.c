/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:53:14 by carmoren          #+#    #+#             */
/*   Updated: 2023/08/16 16:14:02 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//character

void	ft_putcharacter_length(char character, int *length)
{
	if (*length != -1)
	{
		if (write(1, &character, 1) < 0)
		{
			(*length) = -1;
			return ;
		}
		(*length)++;
	}
}

//string

void	ft_string(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		if ((write(1, "(null)", 6)) == -1)
			*length = -1;
		else
			(*length) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		if (*length == -1)
			return ;
		ft_putcharacter_length(args[i], length);
		if (*length == -1)
			return ;
		i++;
	}
}
