#include "libft.h"

static void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (!str)
		return ;
	while (str[++i])
		ft_putchar(str[i]);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
