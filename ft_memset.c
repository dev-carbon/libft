#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*d;

	i = -1;
	d = (unsigned char *)s;
	while (++i < n)
		*(d + i) = *(s + i);
	return ((void *)d);
}
