#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*strend;
    size_t	i;

    i = 0;
    if (s == NULL)
	    return (NULL);
    if (start > (unsigned int)ft_strlen(s))
	    return (NULL);
    if (s[0] == '\0' || s == NULL)
	    return (NULL);
    strend = (char *)malloc(sizeof(*s) * (len + 1));
    if (strend == NULL)
        return (NULL);
    while (s[start] && i < len)
	strend[i++] = s[start++];
    strend[i] = 0;
    return (strend);
}
