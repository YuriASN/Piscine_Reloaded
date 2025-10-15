void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	if (!tab || !length)
		return ;
	while (++i < length)
		f(tab[i]);
}
