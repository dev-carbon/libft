#include "libft.h"

static size_t	get_size(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n / 10 > 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int		isNegative;
	size_t	size;
	char	*str;

	i = 0;
	isNegative = 0;
	size = get_size(n);
	if (n < 0)
	{
		n = -n;
		isNegative = 1;
	}
	str = malloc(sizeof(char) * size + 1);
	while (n && (i < size))
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	if (isNegative)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}