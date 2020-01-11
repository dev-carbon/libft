/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:38:54 by humanfou          #+#    #+#             */
/*   Updated: 2020/01/11 16:16:38 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	dst_len;
	size_t	i;

	len = ft_strlen(src);
	if (!dst && !size)
		return (len);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (len + size);
	else
		len += dst_len;
	i = -1;
	while (src[++i] && dst_len < size - 1)
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = 0;
	return (len);
}
