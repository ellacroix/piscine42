#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	printf("%d", ft_str_is_printable("aa"));
	printf("%d", ft_str_is_printable("a"));
	return (0);
}
