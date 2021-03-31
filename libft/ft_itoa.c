#include "libft.h"

char	*ft_strdup(const char *src);

char    *ft_itoa(int n)
{
    int     tmp;
    int     len;
    char    *str;

    tmp = n;
    len = 0;
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    while (tmp /= 10)
        len++;
    if (!(str = malloc(sizeof(char) * len)))
        return (NULL);
    str[--len] = '\0';
    while (len--)
    {
        str[len] = n % 10 + '0';
        n = n / 10;
    }
    if (n < 0)
        str[0] = '-';
    return (str);
}