#include "libft.h"

void	ft_putstr(const char *s)
{
	while (*s)
		ft_putchar(*s++);
}