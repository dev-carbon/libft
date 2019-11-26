#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	dst_len;
	size_t	i;

	len = ft_strlen(src);
	if (!dst && !size)
		return (len);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (len + size);
	else
		len += dst_len;
	i = -1;
	while (src[++i] && dst_len < size - 1)
		dst[dst_len + i] = src[i];
	dst[dat_len + i] = 0;
	return (len);
}
