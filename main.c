#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);
// size_t	ft_strtrim(char const *s1, char const *set);

int main(int ac, char const *av[])
{
	if (ac > 1)
	{
		// printf("dec = %d char = %c\n", argv[1][0], argv[1][0]);
		// printf("%c ft_islower = %d\n", argv[1][0], ft_islower(argv[1][0]));
		// printf("%c ft_isupper = %d\n", argv[1][0], ft_isupper(argv[1][0]));
		// printf("%c ft_isascii = %d\n", argv[1][0], ft_isascii(argv[1][0]));
		// printf("%c ft_isalpha = %d\n", argv[1][0], ft_isalpha(argv[1][0]));
		// printf("%c ft_isdigit = %d\n", argv[1][0], ft_isdigit(argv[1][0]));
		// printf("needle = %c | found %s\n", av[2][0], ft_strrchr(av[1], av[2][0]));
		// printf("first occurrence of string %s in %s is %s", av[2], av[1], ft_strnstr(av[1], av[2], 15));
		// ft_putstr(ft_strtrim(av[1], av[2]));
		// ft_putchar(av[1][0]);
		// ft_strtrim(av[1], av[2]);
		// printf("trim = %s\n", ft_strtrim(av[1], av[2]));
		// printf("split = %s\n", ft_split(av[1], av[2]));
		// char **split = ft_split(av[1], *av[2]);
		// ft_putstr(split[0]);
		// printf("%s\n", split[0]);
		// ft_split(av[1], *av[2]);
		// char **split;

		// split = ft_split(av[1], *av[2]);
		// while (*split)
		// {
		// 	ft_putstr(*split++);
		// 	ft_putchar('\n');
		// }
		// ft_itoa(ft_atoi(av[1]));
		// printf("%s\n", ft_strrev(av[1]));
		ft_putstr(ft_itoa(ft_atoi(av[1])));
	}
	return 0;
}
