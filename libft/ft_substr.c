#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*strend;
    size_t	i;
    size_t	j;

    strend = malloc(sizeof(char) * (len + 1));
    if (!strend)
        return (NULL);
    i = 0;
    j = 0;
    
    while (s[i])
    {
	    if (i >= start && j < len)
	    {
		    strend[j] = s[i];
		    j++;
	    }
	    i++;
    }
    strend[j] = 0;
    return (strend);
}
