#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(*little))
		return ((char *)big);
	i = ft_strlen(little);
	while (*big && len-- )
	{
		if (*big == *little && (ft_memcmp(big, little, i) == 0))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
