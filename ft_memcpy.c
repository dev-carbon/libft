#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = -1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (++i < n)
		*(d + i) = *(s + i);
	return ((void *)d);
}
