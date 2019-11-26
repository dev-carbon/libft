#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	pos;

	pos = 0;
	if (!(nmemb * size))
	{
		nmemb = 1;
		size = 1;
	}
	if (!(res = malloc(nmemb * size)))
		return (NULL);
	ft_memset(res, 0, size * nmemb);
	return (res);
}
