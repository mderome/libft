#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;
    unsigned char *str;

    i = 0;
    if (c == 0)
	    return (s + ft_strlen(s));
    str = (unsigned char*)s;
    while (str[i])
    {
        if (str[i] == (unsigned char)c)
            return (str + i);
	i++;
    }
    return (NULL);
}
