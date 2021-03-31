#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = -1;
	while (src[++i])
	{
	}
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}