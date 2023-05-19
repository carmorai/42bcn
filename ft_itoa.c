/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:29:38 by carmoren          #+#    #+#             */
/*   Updated: 2023/05/19 10:36:10 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static long int	ft_base(long int base, size_t exp, int *value)
{
	long int	nbr;

	*value = 1;
	if (exp == 0)
		return (1);
	nbr = base;
	while (--exp)
		nbr *= base;
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		value;
	char	*nbr;
	size_t	digit;

	digit = 1;
	while (n / ft_base(10, digit, &value))
		digit++;
	if (n < 0)
	{
		value = -1;
		digit++;
	}
	nbr = (char *)ft_calloc(digit + 1, sizeof(char));
	if (!nbr)
		return (0);
	while (--digit)
	{
		nbr[digit] = (char)(value * (n % 10) + '0');
		n /= 10;
	}
	if (value == 1)
		nbr[digit] = (char)((n % 10) + '0');
	else
		nbr[0] = '-';
	return (nbr);
}
