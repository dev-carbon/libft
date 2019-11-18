#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*join;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(join = malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = -1;
	while (++i < len1)
		join[i] = s1[i];
	i = -1;
	while (++i < len2)
		join[len1 + i] = s2[i];
	join[len1 + i] = '\0';
	return (join);
}