/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:21:43 by humanfou          #+#    #+#             */
/*   Updated: 2019/11/18 13:49:52 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	unsigned char	*ddst;
	unsigned char	*dsrc;

	i = 0;
	ddst = (unsigned char *)dst;
	dsrc = (unsigned char *)src;
	while (i < n)
	{
		ddst[i] = dsrc[i];
		if (dsrc[i] == (unsigned char)c)
			return ((void *)ddst + i + 1);
		i++;
	}
	return (NULL);
}
