#include "libft.h"

char	*ft_strrev(char *str)
{
	char	swap;
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(str);
	while (++i < (len / 2))
	{
		swap = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = swap;
	}
	return (str);
}