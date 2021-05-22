#include "libft.h"

int	check_start(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f')
		return (0);
	else if (c == '\r')
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	num;

	neg = 1;
	num = 0;
	i = 0;
	while (check_start(str[i]) == 0)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * neg);
}
