/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 12:13:52 by humanfou          #+#    #+#             */
/*   Updated: 2020/01/11 14:15:42 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			while (*s && *s == c)
				s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count + 1);
}

size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s == c)
		s++;
	while (*(s + len) && *(s + len) != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	len;
	size_t	k;
	size_t	i;

	if (!(split = malloc(sizeof(char*) * count_words(s, c))))
		return (NULL);
	k = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = word_len(s, c);
			if (!(split[k] = malloc(sizeof(char) * (len + 1))))
				return (NULL);
			i = -1;
			while (++i < len)
				split[k][i] = *s++;
			split[k++][i] = 0;
		}
		s++;
	}
	split[k] = NULL;
	return (split);
}
