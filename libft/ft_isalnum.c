#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ft_isalpha(c) == 1)
		return (1);
	return (0);
}
