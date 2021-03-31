#include "libft.h"

void    ft_bzero(void *s, size_t nb)
{
    while (nb)
        ((unsigned char *)s)[--nb] = 0;
}
