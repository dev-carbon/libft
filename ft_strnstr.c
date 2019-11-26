/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:39:21 by humanfou          #+#    #+#             */
/*   Updated: 2019/11/26 16:19:03 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(*little))
		return ((char *)big);
	i = ft_strlen(little);
	while (*big && len--)
	{
		if (*big == *little && (ft_memcmp(big, little, i) == 0))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
