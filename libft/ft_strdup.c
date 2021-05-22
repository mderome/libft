#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;

	i = -1;
	while (src[i])
	{
		i++;
	}
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
	{
		free(dest);
		return (NULL);
	}
	i = -1;
	while (src[++i])
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
