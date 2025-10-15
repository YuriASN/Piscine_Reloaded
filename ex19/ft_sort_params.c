#include "ftlib.h"

static int	is_bigger(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] && s2[i] && s1[i] == s2[i])
		continue ;
	return (s1[i] - s2[i]);
}

static void	sort_strings(char **params)
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (++i < size - 1)
	{
		j = i;
		while (++j < size)
		{
			if (is_bigger(params[i], params[j]))
			{
				tmp = params[i];
				params[i] = params[j];
				params[j] = tmp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	sort_strings(&argv[1]);
	i = 0;
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
	return (0);
}
