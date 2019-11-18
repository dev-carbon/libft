#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	if (!(dup = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}