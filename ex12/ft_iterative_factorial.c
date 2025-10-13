int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 1)
		return (0);
	res = nb;
	i = 0;
	while (++i < nb)
		res *= i;
	return (res);
}
