#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char *str;

	str = malloc(size * nmemb);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size * nmemb);
	return (str);
}
