#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int	n;
	int	isNegative;

	isNegative = 1;
	n = 0;
	while (*nptr && (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' ||
			*nptr == '\v' || *nptr == '\f' || *nptr == '\r'))
		++nptr;
	if (*nptr == '-')
		isNegative = -1;
	if (*nptr == '-' || *nptr == '+')
		++nptr;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		n = n * 10 + (*nptr - 48);
		++nptr;
	}
	return (n * isNegative);
}