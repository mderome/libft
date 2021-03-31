#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
	int neg;
	int num;

	neg = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' ||  str[i] == '\t' || str [i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (str[i] <= '0' || str[i] >= '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * neg);
}
