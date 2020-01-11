/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humanfou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:20:06 by humanfou          #+#    #+#             */
/*   Updated: 2020/01/11 15:32:36 by humanfou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_size(int n)
{
	size_t	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size = size + 1;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	int		is_negative;
	size_t	i;

	is_negative = 0;
	size = get_size(n);
	if (!(str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	i = -1;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (n && ++i < size)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	if (is_negative)
		str[size - 1] = '-';
	str[size] = 0;
	return (ft_strrev(str));
}
