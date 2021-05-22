#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big2;

	i = 0;
	big2 = (char *)big;
	if (little[0] == '\0' || little == 0)
		return (big2);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (j + i) < len)
		{
			if (little[j + 1] == '\0')
				return (big2 + i);
			j++;
		}
		i++;
	}
	return (0);
}
