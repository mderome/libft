#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*fstr;
	unsigned char	*sstr;

	sstr = (unsigned char *)s2;
	fstr = (unsigned char *)s1;
	if (s1 == s2 || n == 0)
		return (0);
	while (n--)
	{
		if (*fstr != *sstr)
			return (*fstr - *sstr);
		if (n)
		{
			fstr++;
			sstr++;
		}
	}
	return (0);
}
