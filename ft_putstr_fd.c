#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write (fd, &s[0], ft_strlen(s));
}
