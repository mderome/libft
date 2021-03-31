#include "libft.h"

size_t	ft_strlcat(char *dst , const char *src , size_t size)
{
    size_t 	i;
    size_t 	dlen;
    char	*dest;
    const char	*source;

    i = size;
    dest = dst;
    source = src;
    while (i-- && *dest)
        dest++;
    dlen = dest - dst;
    i = size - dlen;
    if (i == 0)
	    return (dlen + ft_strlen(source));
    while (*source)
    {
	if (i != 1)
	{
		*dest = *source;
		i--;
	}
	source++;
	dest++;
    }
    *dest = '\0';
    return (dlen + (source - src));
}
