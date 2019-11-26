#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*d;
	unsigned char	*s;

	i = -1;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (++i < n)
	{
		*(d + i) = *(s + i);
		if (*(s + i) == (unsigned char)c)
			return ((void *)d + i + 1);
	}
	return (NULL);
}
