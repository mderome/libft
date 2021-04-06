#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;
	char *str;

	len = ft_strlen(s);
	str = (char *)s;
	while (len != 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return (str + len);
	return (NULL);
}
