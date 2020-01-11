/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:34:01 by humanfou          #+#    #+#             */
/*   Updated: 2020/01/07 17:28:46 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_set(char const *s1, char const *set)
{
	if (ft_memcmp(s1, set, ft_strlen(set)) == 0)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	start = 0;
	end = 0;
	while (check_set(s1 + start, set))
		start = start + ft_strlen(set);
	end = ft_strlen(s1);
	while (check_set(s1 + end - ft_strlen(set), set))
		end = end - ft_strlen(set);
	trim = ft_substr(s1, start, end - start);
	return (trim);
}
