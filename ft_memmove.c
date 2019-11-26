#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		*(dst + i) = *(src + i);
	return (dst);
}
