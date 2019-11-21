#include "libft.h"

static size_t	ft_get_start_indx(char const *s, char const *set)
{
	size_t	ndx;
	size_t	l1;
	size_t	l2;

	ndx = 0;
	l1 = ft_strlen(s);
	l2 = ft_strlen(set);
	while (l1-- && ft_strnstr(s + ndx, set, l2))
		ndx = ndx + l2;
	return (ndx);
}

static size_t	ft_get_end_indx(char const *s, char const *set, size_t start)
{
	size_t	i;
	size_t	ndx;
	size_t	l1;
	size_t	l2;

	i = -1;
	l1 = ft_strlen(s);
	l2 = ft_strlen(set);
	ndx = l1;
	while ((++i + start) < l1 && ft_strnstr(s + start + ndx - l2, set, l2))
		ndx = ndx - l2;
	return (ndx);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trim;

	start = ft_get_start_indx(s, set);
	end = ft_get_end_indx(s, set, start);
	if (!(trim = malloc(sizeof(char) * (end + start + 1))))
		return (NULL);
	i = -1;
	while ((++i + start) < end)
		*(trim + i) = *(s + start + i);
	*(trim + i) = '\0';
	return (trim);
}
