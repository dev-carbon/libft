/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:38:00 by humanfou          #+#    #+#             */
/*   Updated: 2020/01/11 16:07:27 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	i = -1;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	while (++i < len)
		*(cdst + i) = *(csrc + i);
	return (dst);
}
