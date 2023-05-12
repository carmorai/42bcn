#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len)
	{
		if (dst < src)
		{
			while (i < len)
			{
				((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
				i++;
			}
		}
		else if (src < dst)
		{
			while (len --)
				((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}
