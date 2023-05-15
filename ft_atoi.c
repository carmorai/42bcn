#include <limits.h>
#include "libft.h"

int ft_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int ft_atoi(const char *str)
{
	int i = 0;
	int final_value = 1;
	long long int nbr = 0;

	while (str[i] && ft_space(str[i]))
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			final_value = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;

		if ((nbr < 0 && final_value == -1) || (nbr > INT_MAX && final_value == 1))
			return (final_value == -1 ? 0 : -1);
	}

	return (nbr * final_value);
}
