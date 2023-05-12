#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    size_t i;

    for (i = 0; i < n; i++)
    {
        *ptr = 0;
        ptr++;
    }
}
