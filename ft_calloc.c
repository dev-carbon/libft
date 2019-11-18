#include "libft"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	if (nitems == 0 || size == 0)
		return (NULL);
	result = malloc(size * nitems);
	if (result == NULL)
		return (result);
	i = 0;
	while (i < nitems)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}