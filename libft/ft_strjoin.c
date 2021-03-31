#include "libft.h"

int		ft_strlen(const char *s);

char	*ft_cat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
    char *str;

    if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (str = NULL);
    str = ft_cat(((char *)s1), ((char *)s2));
	return (str);
}