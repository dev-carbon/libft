#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	pos;
	size_t	len;

	pos = -1;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (++pos < (size - 1) && src[pos])
		dst[pos] = src[pos];
	dst[pos] = 0;
	return (len);
}
