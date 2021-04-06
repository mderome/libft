#include "libft.h"

int	count_word(const char *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t len;
	char **strs;

	len = ft_strlen(s) - count_word(s, c);
	strs = malloc(sizeof(char **) * len + 1);
	if (!strs)
		return (NULL);
	return (0);
}
