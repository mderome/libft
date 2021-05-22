#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*sptr;

	index = 0;
	if (!s || !f)
		return (NULL);
	sptr = malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (sptr == NULL)
		return (NULL);
	ft_bzero(sptr, ft_strlen(s) + 1);
	while (s[index])
	{
		sptr[index] = f(index, s[index]);
		index++;
	}
	sptr[index] = '\0';
	return (sptr);
}
