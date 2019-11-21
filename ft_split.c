#include "libft.h"

static size_t	get_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			size++;
			while (*(s + 1) != c && *(s + 1) != '\0')
				s++;
		}
		else
		{
			while (*(s + 1) == c && *(s + 1) != '\0')
				s++;
		}
		s++;
	}
	return (size);
}

static size_t	get_words_len(char const *s, char c)
{
	size_t	len;

	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*(s + len) != c && *(s + len) != '\0')
				len++;
			return len;
		}
		s++;
	}
	return (0);
}

void	copy_word(char *dst, char const *src, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
	{
		*(dst + i) = *(src + i);
	}
	*(dst + i) = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	len;
	size_t	k;

	k = 0;
	if (!(split = (char **)malloc(sizeof(char *) * get_size(s, c) + 1)))
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = get_words_len(s, c);
			if (!(split[k] = malloc(sizeof(char) * len + 1)))
				return (NULL);
			copy_word(split[k], s, len);
			s = s + len;
			k++;
		}
		s++;
	}
	split[k + 1] = NULL;
	return (split);
}