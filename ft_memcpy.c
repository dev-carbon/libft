/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 13:11:06 by humanfou          #+#    #+#             */
/*   Updated: 2019/11/18 13:21:26 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *ddest;
	unsigned char *dsrc;

	
	if (dest == NULL && src == NULL)
		return (NULL);
	i = -1;
	ddest = (unsigned char *)dest;
	dsrc = (unsigned char *)src;
	while (++i < n)
		ddest[i] = (unsigned char)dsrc[i];
	return (void *)dest;
}
