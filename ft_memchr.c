#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)s;
	while (*ps)
	{
		if (*ps == (unsigned char)c)
			return ((void *)ps);
		ps++;
	}
	return (NULL);
}
